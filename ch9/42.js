const rl = require('readline-sync');

const N = rl.questionInt('Enter nElements: ');
const arr = [];

while (arr.length < N) {
  arr.push(rl.questionInt(`Enter num${arr.length+1}: `));
}

const detbigySmalz = function(listOfNums = null) {
  const bigySmalz = {
    bigst: null, smlst: null,
    locbig: [], locsma: [],
  };
  bigySmalz.smlst = bigySmalz.bigst = listOfNums[1];
  listOfNums.forEach((n, i) => {
    if (n >= bigySmalz.bigst) {
      if (n == bigySmalz.bigst) {
        bigySmalz.locbig.push(i);
      } else {
        bigySmalz.bigst = n;
        bigySmalz.locbig = [];
        bigySmalz.locbig.push(i);
      }
    } else if (n <= bigySmalz.smlst) {
      bigySmalz.smlst = n;
      bigySmalz.locsma = [];
      bigySmalz.locbig.push(i);
    } else if (n == bigySmalz.smlst) {
      bigySmalz.locsma.push(i);
    }
  });
  return bigySmalz;
};

const result = detbigySmalz(arr);

console.log(`Biggest  = ${result.bigst} Loc(s) : ${result.locbig}\n
             Smallest = ${result.smlst} Loc(s) : ${result.locsma}`);
