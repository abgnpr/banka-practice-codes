const rl = require('readline-sync');

let arr = [];
let N = rl.questionInt("Enter N : ");

// store N numbers in an array
for (let i = 0; i < N; ++i) {
    arr[i] = rl.questionInt(`Enter num${i}: `);
}

// print the number of numbers that are
// divisible by both two and three.
let n = 0;
for (let i = 0; i < arr.length; ++i) {
    if (arr[i] % 2 == 0 && arr[i] % 3 == 0) ++n; 
}

console.log(n);