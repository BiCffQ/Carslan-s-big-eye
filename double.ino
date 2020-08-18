int R = ; //右边传感器引脚号
int L = ; //左边传感器引脚号

//当检测到黑色时输出为高电平

void route() {
  if (digitalRead(L) == 1 && digitalRead(R) == 1) {
    //同时是黑色,通过路口继续直行
    //放入直行程序
  }
  else if (digitalRead(L) == 0 && digitalRead(R) == 0) {
    //同时是白色,常一般情况继续直行
    //放入直行程序
  }
  else if (digitalRead(L) == 1 && digitalRead(R) == 0) {
    //左边检测到黑色,说明往右偏了,应该左转
    //放入左转程序
  }
  else if (digitalRead(L) == 0 && digitalRead(R) == 1) {
    //右边检测到黑色,说明往左边偏了,应该右转
    //放入右转程序
  }

  void setup() {
    pinMode(R, INPUT);
    pinMode(L, INPUT);
  }
  void loop() {
    route();
  }
