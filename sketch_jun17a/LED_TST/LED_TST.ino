#define LED1 32
#define LED2 33
const int LEDG = 13;
const int LEDY = 12;
const int LEDR = 14;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(LEDR, OUTPUT);

}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(100);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDR, LOW);
  delay(100);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDY, HIGH);
  digitalWrite(LEDR, LOW);
  delay(100);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDR, HIGH);
  delay(100);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDY, LOW);
  digitalWrite(LEDR, LOW);
}
