//week12_1_happy_bubble_3D_partl
void setup(){
  size(300, 300, P3D);//開啟3D功能
}
void draw(){
  background(255); //白色的背景
  
  pushMatrix(); //被分矩陣
  translate(mouseX, mouseY); //照著滑鼠的座標動
  sphere(60); //半徑60的圓球
  popMatrix(); //還原矩陣
}
