const rl = require('readline-sync')

// checks if all the elements in the 
// array are same of not. 

let a = []; 
while (a.length < 5) {
    a[a.length] = rl.questionInt();
}

let oddMatchFound = false
a.forEach(element => {
    if (a[0] != element) oddMatchFound = true
});

oddMatchFound? console.log("NO") : console.log("YES")