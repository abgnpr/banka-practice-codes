class Date {
  constructor(dd = null, mm = null, yyyy = null) {
    this.DD = dd;
    this.MM = mm;
    this.YYYY = yyyy;
  }
}

/* inputDate: used to input and validate
 * a date entered via the command line. */
let inputDate = (dateNum = '') => {
  
  // intput
  console.log(`Enter Date${dateNum} `);
  let d = rl.questionInt('');
  let m = rl.questionInt('/');
  let y = rl.questionInt('/');
  
  let months = [31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];      
  if ((y%4==0 && y%100 != 0) || y%400==0) {
    months = [31, 29, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
  }

  // vadidation check
  if (!(y<0 || y>9999 || m<1 || m>12 || d<1 || d>months[m-1])) {
    return new Date(d, m, y);
  } else { 
    console.log('Invalid date entered.');
    return new Date();
  }

};

const rl = require('readline-sync');
const d = inputDate();
console.log(d);