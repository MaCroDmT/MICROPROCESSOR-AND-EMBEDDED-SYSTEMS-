void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode (10, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8, HIGH);
delay(5000);
digitalWrite(10,HIGH);
delay(1000);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(12,HIGH);
delay(3000);
for(int i=0; i<3; i=i+1)
{
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
}
}
