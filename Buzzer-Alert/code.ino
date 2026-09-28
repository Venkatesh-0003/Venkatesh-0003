void setup() {
  pinMode(8, OUTPUT);
}
void loop() {
  tone(8, 1000); // 1000Hz beep
  delay(500);
  noTone(8);
  delay(500);
}
