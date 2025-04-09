// week08_4_bubble_balloon_part2
// 用 mouse 吹氣球(像泡泡一樣，慢慢變大)
void setup(){
    size(400, 400); //大小
}
int x,y,s; // 氣球的座標、大小
void draw(){
  background(255); //白色的背景
  ellipse(x, y-s/2, s*0.7,s);
  if(mousePressed) s++;
  else{
    if(y>s) y-=2;
  }
}
void mousePressed(){ //按下mouse改變氣球位置、大小
  x = mouseX;
  y = mouseY;
  s = 1; // 大小設成數字 1
}
