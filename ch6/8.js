// Enter 2 numbers and print the bigger number

const rl = require('readline-sync')

let a = parseInt(rl.question("Enter A : "), 10);
let b = parseInt(rl.question("Enter B : "), 10);

console.log("The bigger number is :", `${a>b?a:b}`)

