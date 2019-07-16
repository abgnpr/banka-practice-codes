/* check prime */
const rl = require('readline-sync')
function isPrime(n) {
    if (n==1) return false
    let  N = n
    while (--n > 1) if (N%n==0) return false
    return true
}
console.log("Prime =", isPrime(parseInt(rl.question("Enter n: "))))
