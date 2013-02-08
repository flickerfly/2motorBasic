#include <AFMotor.h>

AF_DCMotor motorL(1, MOTOR12_64KHZ);
AF_DCMotor motorR(2, MOTOR12_64KHZ);

void setup() {
  motorR.setSpeed(100);
  motorL.setSpeed(100);
}

void loop(){
  motorR.run(FORWARD);
  motorL.run(FORWARD);
  
  delay(1000);
  
  motorR.run(BACKWARD);
  motorL.run(BACKWARD);
  
  delay(1000);
 
  motorR.run(RELEASE);
  motorL.run(RELEASE);
 
   delay(6000);
  
}
