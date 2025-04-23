//week10_1_happy_bubble_partl
PImage toy1, toy2; //變數宣告
//int a, b;很像之前教過的int整數宣告
void setup(){
  size(400, 495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1); //把第1張圖當背景長寬要相同
  if(mousePressed) image(toy2, 0, 0); //在秀第2張圖
}
