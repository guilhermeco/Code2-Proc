class Object {

int moveX;
int moveY;

int x;
int y;

  
Object(int x, int y){ 
  x = moveX;
  y = moveY;
  
}
  
void drawObject(){
  
  for (int i = 1; i < 200; i++){
    strokeWeight(20);
    stroke(random(30,i), random(10,40), random(30,i));
  }

  line(0, mouseY + moveY, width, mouseY + moveY);
  line(0, mouseY - moveY, width, mouseY - moveY);
  line(mouseX + moveX, 0, mouseX + moveX, height);
  line(mouseX - moveX, 0, mouseX - moveX, height);
  
  
  moveY++;
  moveX++;
  
  }
  
void update(){
  moveX = 0;
  moveY = 0;
}

}