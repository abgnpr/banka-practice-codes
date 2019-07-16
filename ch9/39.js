/* Program to generate first 20 numbers
 * of fibonacci series starting a and b
 * in a 1D array and print all the
 * numbers together with their factors,
 * from the array. */

const rl = require('readline-sync');

let a = rl.questionInt('A : ');
let b = rl.questionInt('B : ');

const arr = [];

while (arr.length < 20) {
  arr.push(a);
  t = a;
  a = b;
  b = t + b;
}

arr.forEach((num) => {
  console.log(
      `${num} Factors: ${(() => {
        const factors = [];
        for (let i = 1; i <= n; ++i) {
          if (num % i == 0) factors.push(i);
        }
        return factors;
      })()}`);
});
