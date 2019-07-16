// enter 2 numbers and check if they
// consecutive odds

const rl = require('readline-sync')

function areConsOdds(x, y) {
    if(x%2!=0 && y%2!=0 && Math.abs(x-y)==2)
        return true
    else
        return false
}

console.log(areConsOdds(
    parseInt(rl.question("Enter A: ")),
    parseInt(rl.question("Enter B: "))
))
