const rl = require('readline-sync')

function calcCharge(u) {
    
    let s = 0
    
    if (u <= 200) {
        s = 300 + 3.50*u;
    } else if (u <= 500) {
        s =  300 + 3.50*200 + (u-200)*5
    } else {
        s =  300 + 3.5*200 + 5*300 + (u-500)*7
    } 

    if (u>1000) {
        s += 2*u
    }

    return s
}

console.log(`Charge is : ${
    calcCharge(parseInt(rl.question("Enter units: ")))
    }`)
