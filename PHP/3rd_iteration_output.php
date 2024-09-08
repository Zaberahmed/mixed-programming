<!DOCTYPE html>
<html>

<head>
    <title>Welcome Page</title>

</head>

<body>

    <?php
    //GET request setup

    $curl = curl_init(); //initialize cURL and setup array

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

    $response = curl_exec($curl); // extracting response from cURL
    $err = curl_error($curl);

    curl_close($curl);

    $customers = json_decode($response, true); //converting json into associative array

    ?>

    <?php
    //button functions

    if (isset($_GET['sortbyname'])) { // sorting by name
        usort($customers, function ($a, $b) {
            return strnatcasecmp($a['name'], $b['name']);
        });
    }

    if (isset($_GET['sortbynumber'])) { // sorting by number
        usort($customers, function ($a, $b) {
            return strnatcasecmp($a['number'], $b['number']);
        });
    }

    ?>

    <!-- button placement -->

    <form method="get">
        <input type="submit" name="sortbyname" value="Sort By Name" style="position: relative; left: 30%;">
        <input type="submit" name="sortbynumber" value=" Sort By Number" style="position: relative; left: 55%;">
    </form>

    <!-- table placement -->


    <?php

    $total_displayed = 0;
    $upper_limit = 10;
    $lower_limit= 1;
    

    while ($total_displayed < count($customers)) {

        $serial=1; // Serial no. initialization every time a new table is created
    ?>
        <table border=".5px" align="center">
            <thead align="center"> <!-- setting up table header -->
                <tr>
                    <th>SL. No</th>
                    <th> Name</th>
                    <th>Number</th>
                </tr>
            </thead>

            <?php

            foreach ($customers as $customer) { //looping through all the indices of the associative array
                if ($customer['number'] <= $upper_limit && $customer['number'] >= $lower_limit) {

            ?>
                    <tbody align="center"> <!-- setting up table body -->
                        <tr>
                            <td> <?php echo $serial ?></td>
                            <td> <?php echo $customer['name']; ?> </td>
                            <td> <?php echo $customer['number']; ?> </td>
                        </tr>
            <?php
                    $total_displayed++;
                    $serial++;
                }
            }
            $upper_limit += 10;
            $lower_limit+=10;
        }
            ?>
                    </tbody>
        </table>

</body>

</html>