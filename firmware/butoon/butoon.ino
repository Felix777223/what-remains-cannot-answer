const int joystickPin = 15;
bool readyForNextTrigger = true;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int x = analogRead(joystickPin);

  // 摇杆向任意一侧明显拨动
  bool moved = (x < 1000 || x > 3000);

  // 摇杆回到中间
  bool centered = (x > 1600 && x < 2500);

  if (readyForNextTrigger && moved) {
    Serial.println(1);
    readyForNextTrigger = false;
  }

  if (!readyForNextTrigger && centered) {
    readyForNextTrigger = true;
  }

  delay(20);
}