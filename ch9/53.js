class Date {
  constructor(dd = null, mm = null) {
    this.DD = dd;
    this.MM = mm;
  }
};

findDate = (nDays) => {
  var date = new Date('x', 'x');
  if (!(nDays > 366 || nDays < 0)) {
    let months = [31, 29, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31];
    for (let monthNo = 1; monthNo <= 12; ++monthNo) {
      let daysInMonth = months[monthNo - 1];
      if (nDays > daysInMonth) {
        nDays -= daysInMonth;
      } else {
        date.DD = nDays.toString();
        if (nDays <= 9) date.DD = '0' + date.DD;
        date.MM = monthNo.toString();
        if (monthNo <= 9) date.MM = '0' + date.MM;
        break;
      }
    }
  }
  return date;
};

printDate = (d = new Date(), separator = '.') => {
  console.log(`${d.DD}${separator}${d.MM}`);  
}

const rl = require('readline-sync');
let mydate = findDate(rl.questionInt("nDays : "));
printDate(mydate, '/');