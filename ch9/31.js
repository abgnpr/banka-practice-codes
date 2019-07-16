/* Program to generate first 20 numbers
 * of Fibonacci series */

let arr = []

let a = 0, b = 1
for (let i=0; i<20; ++i) {
    arr[i] = b;
    t = b;
    b = a + b;
    a = t;
}

console.log(arr)