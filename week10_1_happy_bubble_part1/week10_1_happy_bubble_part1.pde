// week10_1_happy_bubble_part1
PImage toy1, toy2; //變數宣告
// int a, b; 很像之前教過的 int 整數宣告
void setup(){
  size(400, 495);
  toy1 = loadImage("toy1.jpg");
  toy1 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1); // 把第1張圖當背景，長寬要相同
  if(mousePressed) image(toy2, 0, 0); // 再秀第2張圖
