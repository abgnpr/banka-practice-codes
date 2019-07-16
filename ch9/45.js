/* create two separate arrays with 5
 * elements and print it after merging
 * it into a third array. */

const rl = require('readline-sync');

let arrA = [ 'apple', 'orange', 'grapes', 'pinapple', 'pomegrenate' ];
let arrB = [ 'jira', 'dhania', 'mirch', 'golki' ];

merge = (a = [], b = []) => {
  b.forEach(element => { a.push(element); });
  return a;
}

console.log(merge(arrA, arrB));
