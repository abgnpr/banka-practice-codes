const rl = require('readline-sync');

// an empty array
const arr = [];

// input - 5 elements
while (arr.length < 5) {
  arr.push(rl.questionInt(`num${arr.length+1}: `));
}

// for each element N in arr
for (let i = 0; i < arr.length; ++i) {
  const N = arr[i];

  if ( // if reverse(N) == N

    (/* inline function */ () => {
      let n = N;
      let r = 0;
      do {
        r = r*10 + n%10;
      } while ((n = Math.floor(n/10)) > 0);
      if (N == r) return true; else return false;
    })()

  ) /* then log N */ console.log(N);
}
