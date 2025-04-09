//week08_5_bubble_balloon_patr2
//放開mouse會往上飄
void setup(){
  size(400, 400); //大小
}
int x, y, s; //氣球的座標 氣球的大小
void draw(){
  background(255);//白色的背景
  ellipse(x, y-s/2, s*0.7, s); //瘦瘦的氣球
  if(mousePressed)s++;
  else{ //沒有壓就會往上飄
    if(y>s/2)y-=2; //沒撞到天花板就往上移
  }
}
void mousePressed(){ //按下mouse改變氣球位置大小
  x = mouseX;
  y=mouseY;
  s = 1;
}
