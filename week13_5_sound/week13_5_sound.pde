///week13_5_sound
//要先安裝sketch-library-manage libraries
//找sound下載
//撥放音樂
import processing.sound.*; //使用聲音的外掛
SoundFile mySound,monkey, sword; //宣告變數mysound他是soundfile
void setup(){
  size(400, 400);
  monkey = new SoundFile(this, "Monkey 1.mp3");
  sword = new SoundFile(this, "sword slash.mp3");
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
}
void draw(){
}
