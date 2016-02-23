#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

void setup(){
	servo1.attach(4);
	servo2.attach(5);
	servo3.attach(6);
	servo4.attach(7);

  goStraight();
}

void goStraight(){
  servo1.write(103);
  servo2.write(84);
  servo3.write(84);
  servo4.write(103);
  delay(3000);

  turn();
}

void turn(){
  int r = random(0,3);
  if(r == 0){
    servo1.write(84);
    servo2.write(84);
    servo3.write(84);
    servo4.write(84);
    delay(random(500,3000));
    goStraight();
  } else if(r == 1) {
    servo1.write(103);
    servo2.write(103);
    servo3.write(103);
    servo4.write(103);
    delay(random(500,3000));
    goStraight();
  } else {
    servo1.write(84);
    servo2.write(103);
    servo3.write(103);
    servo4.write(84);
    delay(random(500,3000));
    goStraight();
  }
}

void loop(){
  //
}

