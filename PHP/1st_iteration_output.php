<!DOCTYPE html>
<html>
    <head>
        <title>Welcome Page 2</title>
    </head>

    <body>
    
    <?php

$curl = curl_init();

curl_setopt_array($curl, array(
  CURLOPT_URL => "https://beta.rabeyaparibahan.com/task/",
  CURLOPT_RETURNTRANSFER => true,
  CURLOPT_TIMEOUT => 30,
  CURLOPT_HTTP_VERSION => CURL_HTTP_VERSION_1_1,
  CURLOPT_CUSTOMREQUEST => "GET",
  CURLOPT_HTTPHEADER => array(
    "cache-control: no-cache"
  ),
));

$response = curl_exec($curl);
$err = curl_error($curl);

curl_close($curl);

$customers = json_decode($response, true);


?>


<?php
if(isset($_POST['sortbyname'])){
    usort($customers, function($a, $b) {
        return strnatcasecmp($a['name'], $b['name']);
    });
}

if(isset($_POST['sortbynumber'])){
    usort($customers, function($a, $b) {
        return strnatcasecmp($a['number'], $b['number']);
    });
}


?>

<form method="post" > 
<input type="submit" name="sortbyname" value="Sort By Name"  style="position: relative; left: 30%;">
<input type="submit" name="sortbynumber" value=" Sort By Number" style="position: relative; left: 55%;">
</form>



<table border=".5px" align="center">
    <thead align="center" >
        <tr>
            <th> Name</th>
            <th>Number</th>
        </tr>
    </thead>
<?php 
for ($x=0; $x<count($customers);$x++) {

?>
    <tbody align="center">
        <tr>
            <td> <?php echo $customers[$x]['name']; ?> </td>
            <td> <?php echo $customers[$x]['number']; ?> </td>

        </tr>
<?php
}
?>


    </tbody>


</table>



    </body>
</html>