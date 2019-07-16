let sumOfDig = function(x) {
     let s = 0
     while (x>0){
         s += x%10;
         x = Math.floor(x/10)
     }
     return s;
 }

let isPrime = function(x) {
    if (x==1) return false;
    let i = x
    while(--i>1) if(x%i==0) return false
    return true
}

const rl = require('readline-sync')

if(isPrime(sumOfDig(rl.question("N : "))))
    console.log("YES")
else
    console.log("NO")
