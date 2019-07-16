class Date {
  constructor(dd = null, mm = null, yyyy = null) {
    this.DD = dd;
    this.MM = mm;
    this.YYYY = yyyy;
  }
}

let myDate = new Date(30, 4, 2000);

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
      dateStr = mm + sep + dd + sep + yyyy.substr(2, 2);
      break;
    case 'amer10':
      dateStr = mm + sep + dd + sep + yyyy;
      break;
    case 'brit10':
      dateStr = dd + sep + mm + sep + yyyy;
      break;
    default:// brit
      dateStr = dd + sep + mm + sep + yyyy.substr(2, 2);
      break;
    }
    return dateStr;
  } else {
    return 'Date not received!';
  }
};

console.log(formatDate(myDate));