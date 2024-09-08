var a = "zaber"
var b=""
for(let i=0;i<a.length;i++)
    b=b+String.fromCharCode(a.charCodeAt(i)-32)
    
console.log(b)

