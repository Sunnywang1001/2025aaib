//week12_1_happy_bubble_3D_part3
//用mousepressed按下去要對應陣列再來畫
void setup(){
  size(300,300,P3D);
}
int[][]state = new int[6][6];
void draw(){
  background(255, 255, 0);
  ortho();
  lights(); //打光可讓3D模型更立體
  noStroke(); //不要有限
  fill(#FF8BEA); //球是粉紅色
  
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      pushMatrix(); //被分矩陣
      translate(25+j*50, 25+i*50); 
      if(state[i][j]==0) sphere(23);
      else sphere(10);
      popMatrix();
    }
  }
}
void mousePressed(){
  int j = (mouseX)/50, i = (mouseY)/50;
  state[i][j] = 1-state[i][j];
}
