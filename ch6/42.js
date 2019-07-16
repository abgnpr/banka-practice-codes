// sum of the series

let factrl = function(x) {
    if (x==1 || x==0) return 1
    return x * factrl(x-1)
}

let nfactrs = function(x) {
    let n = 0
    for (let i=1; i<=x; ++i)
        if(x%i==0) ++n
    return n;
}

let sum = 0
for(let i=1; i<=10; ++i) {
    sum += factrl(i) / nfactrs(i)
}

console.log(sum)
