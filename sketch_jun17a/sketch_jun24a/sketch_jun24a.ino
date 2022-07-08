int LED1 = 32;
int LED2 = 33;
int LED3 = 25;
int LED4 = 26;
int SW1 = 15;
int SW2 = 2;
void setup() {
  Serial.begin(115200);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
}

void loop() {
  int S1 = digitalRead(SW1);
  int S2 = digitalRead(SW2);
  if (S1 == HIGH) {
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
  else if (S2 == LOW) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(50);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(50);
  } else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
}
