// hcf and lcm

function hcf(a, b) {
    while ((r=a%b) > 0) {
        a = b;
        b = r;
    }
    return b;
}

function lcm(a, b) {
    return (a*b) / hcf(a,b)
}
const rl = require('readline-sync')
let a = parseInt(rl.question("Enter A : "))
let b = parseInt(rl.question("Enter B : "))
console.log(`hcf = ${hcf(a,b)} \nlcm = ${lcm(a,b)}`)
