/* Problem : Enter 2 date and print the 
number of days between them */

/* a structure for storing date */
class Date {
  constructor(dd = null, mm = null, yyyy = null) {
    this.DD = dd;
    this.MM = mm;
    this.YYYY = yyyy;
  }
}

/* formatDate: returns date as a string */
// const formatDate = (d = new Date(), sep = '.', format = 'brit') => {
//   if (d != new Date()) {
//     let dd = d.DD.toString();
//     let mm = d.MM.toString();
//     let yyyy = d.YYYY.toString();
//     if (dd <= 9) dd = '0' + dd;
//     if (mm <= 9) mm = '0' + mm;
//     if (yyyy <= 9) yyyy = '0' + yyyy;
//     else if (yyyy <= 99) yyyy = '00' + yyyy;
//     else if (yyyy <= 999) yyyy = '000' + yyyy;
//     let dateStr = '';
//     switch (format) {
//     case 'amer':
//       dateStr = mm + sep + dd + sep + yyyy.substr(2, 4);
//       break;
//     case 'amer10':
//       dateStr = mm + sep + dd + sep + yyyy;
//       break;
//     case 'brit10':
//       dateStr = dd + sep + mm + sep + yyyy;
//       break;
//     default:// brit
//       dateStr = dd + sep + mm + sep + yyyy.substring(2, 4);
//       break;
//     }
//     return dateStr;
//   } else {
//     return 'Date not received!';
//   }
// };

/* isLeap : returns true if year is a 
 * leap year else it returns false. */
let isLeap = (year) => {
  if ((year%4==0 && year%100 != 0)|| year%400==0) {
    return true;
  } else { 
    return false; 
  }
};

/* calcDays : returns total number of
 * days betweeen date1 and date2. */
let calcDays = (date1 = new Date(), date2 = new Date()) => {
  if(date1 != new Date() && date2 != new Date()) {
    
    if((date1.YYYY > date2.YYYY) 
    || (date1.YYYY == date2.YYYY && date1.MM > date2.MM)
    || (date1.YYYY == date2.YYYY && date1.MM == date2.MM && date1.DD > date2.DD)) {
      let tempDate = date1;
      date1 = date2;
      date2 = tempDate;
    }

    let monthNo = date1.MM;
    let year = date1.YYYY;
    let normalMonths = [31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
    let leapMonths   = [31, 29, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
    let months = isLeap(year)? leapMonths : normalMonths;
    let days = 0;
    let twoDatesInSameMonthAndYr = false;
    if (date1.MM == date2.MM && date1.YYYY == date2.YYYY) {
      days = date2.DD - date1.DD + 1;
      twoDatesInSameMonthAndYr = true;
    } else {
      days = months[monthNo - 1] - date1.DD + 1;
    }
    // console.log(`days : ${days}`);
    if (monthNo == 12) {
      monthNo = 1;
      ++year;
    } else {
      ++monthNo;
    }
    // console.log(`mnthNo : ${monthNo}`);
    while (year <= date2.YYYY) {
      // console.log(`year : ${year}`);
      // console.log(`mnthNo : ${monthNo}`);
      while (monthNo-1 < 12) {
        if (year < date2.YYYY) {
          days += months[monthNo-1];
        } else if (monthNo < date2.MM) {
          days += months[monthNo-1];
        } else {
          if (!twoDatesInSameMonthAndYr)  
            days += date2.DD;
          break;
        }
        // console.log(`days : ${days}`);
        ++monthNo;
      }
      monthNo = 1;
      ++year;
      months = isLeap(year)? leapMonths : normalMonths;
    }
    return days;
  
  } else {
    console.log('Empty dates received!');
    return null;
  }
};

const rl = require('readline-sync');

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

const date1 = inputDate(1);
const date2 = inputDate(2);

console.log(`No of days between the two dates:\
 ${calcDays(date1,date2)}`);
