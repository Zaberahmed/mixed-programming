function recursion(num){
    if(num==0) return 1
    if (num!=1) 
        return num * recursion(num-1)

    return num
}

console.log(recursion(5))
console.log(recursion(20))
console.log(recursion(0))
console.log(recursion(1))