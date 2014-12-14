#include <Servo.h> 

Servo myservo;
           
int switchPin = 3;                 // tilt sensor input to 3
int val;                           // the tilt value, 0 or 1
 
void setup()                    
{
  myservo.attach(9);
  pinMode(switchPin, INPUT);
  Serial.begin(9600); 
}
 
void loop()                   
{
  val = digitalRead(switchPin);
  Serial.println(val);    
 
  if (val == 1){
    myservo.write(90);
    delay(15);
  }
  if (val == 0){
    myservo.write(180);
  }
}
