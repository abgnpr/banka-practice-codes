let questions = [ "Name", "Class", "Sec"];
let answers = [];

function ask(i) {
    process.stdout.write(`${questions[i]} : `);
}

// an event listener
process.stdin.on('data', function(data) {
    answers.push(data.toString().trim());
    if (answers.length < questions.lenght){
        ask(answers.length);
    } else { 
        process.exit;
    }
});

ask(0);
