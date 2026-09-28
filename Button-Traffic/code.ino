// Day 4 - Final - Button + Traffic + Buzzer
int red = 13;
int yellow = 12;
int green = 11;
int button = 2;
int buzzer = 8;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) { 
    // RED + Buzzer
    digitalWrite(red, HIGH);
    tone(buzzer, 1000);
    delay(3000);
    noTone(buzzer);
    digitalWrite(red, LOW);
    
    // YELLOW
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    
    // GREEN
    digitalWrite(green, HIGH);
    delay(3000);
    digitalWrite(green, LOW);
  }
}
