/* create an array of ten integers and 
 * print it after filling with first 10 
 * prime numbers */

 let arr = []

 isPrime = function(x) {
    if (x <= 1) return false 
    let N = x
    while (--x > 1) if (N%x==0) return false;
    return true;
 }

let i = 0, x = 1
while (i < 10) {
    if (isPrime(x)) {
        arr[i] = x
        ++i
    }
    ++x
}

for (let i = 0; i < 10; ++i) {
    console.log(arr[i])
}