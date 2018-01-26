var x, y; //współrzędne obiektu
var krok = -1;
function setup() {
  // put setup code here
  createCanvas(600, 600);
  x = 100;
  y = 125;
}

function draw() {
  background(200);
  // put drawing code here
  //r = random(255);
  //g = random(255);
  //b = random(255);
  fill('red');
  strokeWeight(1);
  stroke('yellow');

  if (x > 14){
    x = x - krok;
  }  else {
    x = x - krok;
    }
  if (y > 14){
    y = x - krok;
} else {
  y = y - krok;
}
  ellipse(x, y, 30, 30);
}
