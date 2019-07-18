const rl = require('readline-sync');

const biggest = (a, b) => a > b? a : b;

let n = 0;
let big = rl.questionInt('');
while (++n < 9) {
    big = biggest(big, rl.questionInt(''));
}

console.log(`\n\n${big}`);
