// bigOfThree and
// smallOfTheree
// using if-else

let bigOf3 = function(a,b,c) {
    if(a>b && a>c) {
        return a;
    } else if (b>c){
        return b;
    } else {
        return c;
    }
}

let smallOf3 = function(a,b,c) {
    if (a>b && a>c) {
        return a;
    } else if (b>c) {
        return b;
    } else { 
        return c;
    } 
}

const rl = require('readline-sync')
let a = parseInt(rl.question())
let b = parseInt(rl.question())
let c = parseInt(rl.question())
console.log(`${bigOf3(a,b,c)}\n${smallOf3(a,b,c)}`)

