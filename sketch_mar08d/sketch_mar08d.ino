void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(3,INPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  int LDR_Value = digitalRead(3);
  
  if (LDR_Value <1){
  digitalWrite(12,LOW);
  
  }
  else {  digitalWrite(12,HIGH);
  


  }
  delay(10);
  }
  
