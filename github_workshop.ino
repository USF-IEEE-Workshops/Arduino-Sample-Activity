#define LED1 2
#define LED2 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);//set pin 2 as an output
  digitalWrite(LED1,LOW);//set pin 2 to the "low" or "off" state
  pinMode(LED2,OUTPUT);//set pin 3 as an output
  digitalWrite(LED2,LOW);//set pin 2 to the "low" or "off" state
}

void loop() {
  // put your main code here, to run repeatedly:  
  delay(500);//delay measured in miliseconds
  digitalWrite(LED1,HIGH);//set pin 2 to the "high" or "on" state
  delay(10);//delay measured in miliseconds
  digitalWrite(LED1,LOW);//set pin 2 to the "low" or "off" state
  delay(500);//delay measured in miliseconds
  digitalWrite(LED2,HIGH);//set pin 3 to the "high" or "on" state
  delay(20);//delay measured in miliseconds
  digitalWrite(LED2,LOW);//set pin 3 to the "low" or "off" state
}
