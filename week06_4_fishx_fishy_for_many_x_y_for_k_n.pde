//week06_4_fishx_fishy_for_many_x_y_for_k_n
//程式模仿自week04_5及week03_4
void setup(){
  size(600, 400);
}
float fishX = 300, fishY = 200;//魚座標
float[] x = new float[100];//java的陣列
float[] y = new float[100];//最多有100個飼料
int N = 0;//目前是0顆資料
void draw(){
  background(#c0ffee);
  for(int i=0; i<N; i++){ //for迴圈
   ellipse(x[i], y[i], 8, 8);
   y[i]++;
   if(y[i]>400){//飼料掉到底部要回收x[i]及y[i]
     for(int k=i; k<N-1; k++){//把左邊逐一往左搬
      x[k] = x[k+1]; //格子的值往左移
      y[k] = y[k+1];
     }
     N--;//更新飼料的總數N
   }
  }
 println(N);
 ellipse(fishX, fishY, 30, 10); //魚 
 }
 void mousePressed(){
   x[N] = mouseX;
   y[N] = mouseY;
   N++;
 }
