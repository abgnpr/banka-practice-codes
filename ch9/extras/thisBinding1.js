function Counter() {
  this.num = 0;
  this.timer = setInterval(function add() {
      this.num++;
      console.log(this.num);
    }, 1000);
  }