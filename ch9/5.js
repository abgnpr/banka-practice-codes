const rl = require('readline-sync')

let arr = []

for (let i = 0; i < 5; ++i) {
    arr[i] = parseInt(rl.question(`Enter num${i+1} : `))
}

let sumO = 0, nO = 0, sumE = 0, nE = 0;
for(let i = 0; i < 5; ++i) {
    if (arr[i]%2) {
        sumO += arr[i];
        ++nO;
    } else {
        sumE += arr[i];
        ++nE;
    }
}

console.log(`AvgEven : ${sumE/nE} \nAvgOdd : ${sumO/nO}`)