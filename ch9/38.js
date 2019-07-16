/* program to print the prime fibonaccis
 * between the first 20 fibs between a
 * and b */

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

for (let i = 0; i < arr.length; ++i) {
  const N = arr[i];
  if (
    ((n = N) => {
      while (--n > 1) if (N%n==0) return false;
      return true;
    })()
  ) console.log(N);
}
