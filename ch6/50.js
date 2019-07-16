/* print table of n and also print the 
 * sum of the table */

let table = function(x) {
    let sum = 0
    for(let i = 1; i <= 10; ++i){
        console.log(`${x*i}`)
        sum += x*i
    } 
    return sum
}

console.log("------\n",table(require('readline-sync').question("N : ")))
