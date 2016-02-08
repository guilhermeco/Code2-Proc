Object obj;


void setup(){
  size(800,800);
  background(180,120,190);
  obj = new Object(1,1);

}

void draw(){
}

void mouseDragged(){

  obj.drawObject();
  
}

void mousePressed(){
  obj.update();
  
}