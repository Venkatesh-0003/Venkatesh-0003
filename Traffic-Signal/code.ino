// Day 1 - Traffic Signal - Arduino UNO
int ledRed = 13;
int ledYellow = 12;
int ledGreen = 11;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // RED ON for 3 sec
  digitalWrite(ledRed, HIGH);
  delay(3000);
  digitalWrite(ledRed, LOW);
  delay(500);

  // YELLOW ON for 1 sec
  digitalWrite(ledYellow, HIGH);
  delay(1000);
  digitalWrite(ledYellow, LOW);
  delay(500);

  // GREEN ON for 3 sec
  digitalWrite(ledGreen, HIGH);
  delay(3000);
  digitalWrite(ledGreen, LOW);
  delay(500);
}
