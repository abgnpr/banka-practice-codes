// enter a number and print its table

/*prints table of x*/
let table = function(x) {
    for(let i=1; i<=10; ++i){
        console.log(`${x} x ${i}\t= ${x*i}`)
    }
}

const rl = require('readline-sync')
table(parseInt(rl.question("N : ")))
