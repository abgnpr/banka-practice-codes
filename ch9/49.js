// create an array of 10 integers and
// print after reversing the entire 
// array.

let arr = [5, 12, 55, 7, 89], arrR = [];
arr.forEach(element => {
  arrR.unshift(element);
});
console.log(arrR);