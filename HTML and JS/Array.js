function getlength(arr){
    return arr.length
}
function getfirstelement(arr){
    return arr[0]
}
function getlastelement(arr){
    return arr[arr.length-1]
}
function pushelement(arr,num){
    return arr.push(num)
}
function popelement(arr){
    return arr.pop()
}


var arr=new Array(1,2,3,4,5)
console.log(arr)


console.log(getfirstelement(arr))

console.log(getlastelement(arr))

console.log(pushelement(arr,6))
console.log(arr)

console.log(popelement(arr))
console.log(arr)