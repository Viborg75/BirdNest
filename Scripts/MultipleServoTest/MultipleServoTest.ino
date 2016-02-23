#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

void setup(){
    // Pin setup
  	servo1.attach(4);
  	servo2.attach(5);
  	servo3.attach(6);
  	servo4.attach(7);
}

void forward(int d){
    servo1.write(103);
    servo2.write(84);
    servo3.write(84);
    servo4.write(103);
    delay(d);
}

void reverse(int d){
    servo1.write(94);
    servo2.write(103);
    servo3.write(103);
    servo4.write(84);
    delay(d);
}

void turnLeft(int d){
    servo1.write(84);
    servo2.write(84);
    servo3.write(84);
    servo4.write(84);
    delay(d);
}

void turnRight(int d){
    servo1.write(103);
    servo2.write(103);
    servo3.write(103);
    servo4.write(103);
    delay(d);
}

void loop(){
    // Program sequence here
    forward(3000);
    turnLeft(1500);
}

