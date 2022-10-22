#include <Servo.h>
#define IR 2
#define pir 4
#define servo 6
Servo enter;
void setup()
{
  pinMode(IR,INPUT);
  pinMode(pir,INPUT);
  enter.attach(servo);
}
void loop()
{
  if(motionDetected() && digitalRead(IR)== HIGH){
    enter.write(90);
  }
}
bool motionDetected(){
if(digitalRead(pir)== HIGH){
 return true;
}else{
  return false;
  }  	
}
