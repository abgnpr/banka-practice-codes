const readline = require('readline-sync')

/* Entering a string */ 
let s = readline.question("Enter a string : ");
console.log(`you entered : ${s}`)

/* Entering a number */
let N  = parseInt(readline.question("Enter N : "), 10);
console.log(`${N} + 2 =`, N + 2);
