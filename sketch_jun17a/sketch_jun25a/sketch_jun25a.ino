const int switch1 = 15;
const int switch2 = 2;
int led1 = 32;
int led2 = 33;
int led11 = 25;
int led22 = 26;
void setup() {
  // put your setup code here, to run once:
pinMode(switch1,INPUT);
pinMode(switch2,INPUT);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led22, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int  sw1 = digitalRead(switch1);
int  sw2 = digitalRead(switch2);
  if(sw1 == HIGH){
    ledon();
  }else if (sw2 == LOW){
    ledoff();
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led11, HIGH);
    digitalWrite(led22, HIGH);
  }
}

void ledon() {
digitalWrite(led1, HIGH); 
digitalWrite(led2, HIGH); 
}
void ledoff() {
digitalWrite(led11, LOW); 
digitalWrite(led22, LOW);
} 
