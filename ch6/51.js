/* nCr */

const rl = require('readline-sync')

let n = questionInt("n : "))
let r = questionInt("r : "))

// recursively
let fact = function(x) {
    if (x==0 || x==1) return 1
    else return x * fact(x-1)
}

console.log(fact(n)/(fact(r)*fact(n-r)))
