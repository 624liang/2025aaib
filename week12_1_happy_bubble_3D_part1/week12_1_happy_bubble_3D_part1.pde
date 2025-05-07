//week12_1_happy_bubble_3D_part1
void setup(){
  size(300, 300, P3D); //開啟3D功能
}
void draw(){
  background(255); //白色背景
  
  pushMatrix(); //備份距離
  translate(mouseX,mouseY); //照著滑鼠的座標移動
  sphere(60); //半徑60的圓球
  popMatrix(); //還原路徑
