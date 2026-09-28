// Day 3 - Smart Traffic with Buzzer Alert
int red = 13;
int yellow = 12;
int green = 11;
int buzzer = 8;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  tone(buzzer, 1000);
  delay(3000);
  noTone(buzzer);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
}
