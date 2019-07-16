// program to create a 1D array of three 
// integers and print after shifting 
// the values at each location to the
// right by one index and placing the
// values at last index to index 0.


let arr = [25, 28, 30];
arr.unshift(arr.pop());
console.log(arr);