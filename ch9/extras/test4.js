// new Array(20)
// an array with 20 blank elements


const rl = require('readline-sync');
let d1 = parseInt(rl.keyIn('Date: ', {limit: '$<1-3>'}));
let d2 = parseInt(rl.keyIn('', {limit: '$<0-3>'}));
console.log(d1*10+d2);