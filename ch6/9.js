// Input 3 numbers and print the 
// biggest number.

const rl = require('readline-sync')

function biggest(a, b, c) {
    return a>b? a>c?a:c : b>c?b:c
}

let a = parseInt(rl.question("Enter A: "),10)
let b = parseInt(rl.question("Enter B: "),10)
let c = parseInt(rl.question("Enter C: "),10)

console.log(biggest(a,b,c));
