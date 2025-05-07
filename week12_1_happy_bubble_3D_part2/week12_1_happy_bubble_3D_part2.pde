//week12_1_happy_bubble_3D_part2
//條一下色彩放在對的位置
void setup(){
  size(300, 300, P3D);
}
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
      sphere(23);
      popMatrix(); 
    }
  }
}
