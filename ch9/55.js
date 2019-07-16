// Enter a date, also enter number of 
// days 'n'. Print the date after adding 
// n days to it.

/* a structure for storing date */
class Date {
  constructor(dd = null, mm = null, yyyy = null) {
    this.DD = dd;
    this.MM = mm;
    this.YYYY = yyyy;
  }
}

/* isLeap : returns true if year is a 
 * leap year else it returns false. */
let isLeap = (year) => {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  } else {
    return false;
  }
};

/* addDaysTo: adds 'days' number of days to date*/
const addDaysTo = (days = 0, date = new Date()) => {
  if (date != new Date()) {
    let dd = date.DD;
    let monthNo = date.MM;
    let year = date.YYYY;
    const normalMonths = [31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
    const leapMonths = [31, 29, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
    let months = isLeap(year) ? leapMonths : normalMonths;
    if (dd + days <= months[monthNo - 1]) {
      dd += days;
    } else {
      days = days - (months[monthNo - 1] - dd);
      if (monthNo == 12) {
        monthNo = 1;
        ++year;
      } else {
        ++monthNo;
      }
      while (days > months[monthNo - 1]) {
        months = isLeap(year) ? leapMonths : normalMonths;
        days -= months[monthNo - 1];
        if (monthNo == 12) {
          monthNo = 1;
          ++year;
        } else {
          ++monthNo;
        }
      }
      dd = days;
    }
    return new Date(dd, monthNo, year);
  } else {
    console.log('No date recieved.');
    return new Date();
  }
};

/* inputDate: used to input and validate
 * a date entered via the command line. */
const inputDate = (dateNum = '') => {

  // intput
  let date = rl.question(`Enter Date${dateNum} [format DD.MM.YYYY] : `);
  date = date.split('.');
  let d = parseInt(date[0]);
  let m = parseInt(date[1]);
  let y = parseInt(date[2]);
  // exception handling required here

  let months = [31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
  if (isLeap(y)) {
    months = [31, 29, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
  }

  // vadidation check
  if (!(y < 0 || y > 9999 || m < 1 || m > 12 || d < 1 || d > months[m - 1])) {
    return new Date(d, m, y);
  } else {
    console.log('Invalid date entered.');
    return new Date();
  }
};

/* formatDate: returns date as a string */
const formatDate = (d = new Date(), sep = '.', format = 'brit') => {
  if (d != new Date()) {
    let dd = d.DD.toString();
    let mm = d.MM.toString();
    let yyyy = d.YYYY.toString();
    if (dd <= 9) dd = '0' + dd;
    if (mm <= 9) mm = '0' + mm;
    if (yyyy <= 9) yyyy = '0' + yyyy;
    else if (yyyy <= 99) yyyy = '00' + yyyy;
    else if (yyyy <= 999) yyyy = '000' + yyyy;
    let dateStr = '';
    switch (format) {
    case 'amer':
      dateStr = mm + sep + dd + sep + yyyy.substr(2, 4);
      break;
    case 'amer10':
      dateStr = mm + sep + dd + sep + yyyy;
      break;
    case 'brit10':
      dateStr = dd + sep + mm + sep + yyyy;
      break;
    default:// brit
      dateStr = dd + sep + mm + sep + yyyy.substring(2, 4);
      break;
    }
    return dateStr;
  } else {
    return 'Date not received!';
  }
};

const rl = require('readline-sync');

const mydate = inputDate();
console.log(`New Date : ${formatDate(
  addDaysTo(rl.questionInt('Enter days to add : '), mydate),
  /* separator = */ '.',
  /* format = */ 'brit10') }`);
