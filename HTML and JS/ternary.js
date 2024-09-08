function ternary(num){
    return num<5 ? "Less than five" : num<10 ? "More than five but less than ten" : "More than ten"
}
console.log(ternary(16))