let nP = 0, nO = 0, nE = 0;

let isPrime = function(x) {
    if (x <= 1) return false;
    let i = x
    while (--i > 1) if (x%i==0) return false;
    return true;
}

const rl = require('readline-sync')

let arr = []
for (let i = 0; i < 5; ++i) {
    arr[i] = rl.questionInt(`Enter num${i} : `);
}

for (let i = 0; i < 5; ++i) {
    
    if(arr[i]%2) {
        ++nO;
        if (isPrime(arr[i])) ++nP;
    
    } else { ++nE; }
}

console.log(`nPrime=${nP}  nOdd=${nO}  nEven=${nE}`);
