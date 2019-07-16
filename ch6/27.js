function isPrime(n) {
    if(n==1) return false
    let i = n
    while (--i > 1) if(n%i==0) return false
    return true
}

function reverse(n) {
    let r = 0
    while (n > 0) {
        r = r*10 + n%10
        n = Math.floor(n/10)
    }
    return r
}

const rl = require('readline-sync')

if(isPrime(reverse(parseInt(rl.question("Enter N:")))))
    console.log("Yes")
else
    console.log("No")
