#include <Servo.h>

Servo servo1, servo2, servo3, servo4;
int redPin = 12;
int greenPin = 13;
int bluePin = 11;

void setup(){
    // Pin setup
  	servo1.attach(4);
  	servo2.attach(5);
  	servo3.attach(6);
  	servo4.attach(7);
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue){
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}

void forward(int d){
    setColor(255,0,0);  // RED
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
    setColor(0,0,255);  // BLUE
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
    turnLeft(1400);
}

