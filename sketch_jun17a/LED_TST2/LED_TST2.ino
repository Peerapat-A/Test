#define LED1 32
#define LED2 33
const int LEDG = 13;
const int LEDY = 12;
const int LEDR = 14;
#define SW1 2
#define SW2 4
void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
}

void loop() {
  char ch1;
  ch1 = Serial.read();
  if (ch1 == 'a') {
    digitalWrite(LED1, HIGH);
    Serial.println("LED1 ON");
    }
    else if (ch1 == 'b'){
      digitalWrite(LED1, LOW);
      Serial.println("LED1 OFF");
    }
//    else{
//      digitalWrite(LED1 LOW);
//      Serial.println("LED1 OFF");
//    }

}
