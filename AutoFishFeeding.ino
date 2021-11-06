// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin1 = 3; 
int servoPin2 = 5;
int ledPin = 12;
// Create a servo object 
Servo Servo1,Servo2; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin1); 
   Servo2.attach(servoPin2);
   pinMode(ledPin, OUTPUT);
}
void loop(){ 
   // Make servo go to 0 degrees 
   //digitalWrite(ledPin, HIGH);
   //delay(1000);
   Servo1.write(0);
   delay(100);
    
   
   Servo2.write(0);
   delay(3000);
   Servo2.write(0); 
   delay(100); 
   Servo2.write(10);
   delay(100); 
   Servo2.write(20);
   delay(100); 
   Servo2.write(30);
   delay(100); 
   Servo2.write(40);
   delay(100); 
   Servo2.write(50);
   delay(100);
   Servo2.write(60);
   delay(100);
   Servo2.write(70);
   delay(100);
   Servo2.write(80);
   delay(100);
   Servo2.write(90);
   delay(100);
   Servo2.write(100);

   
   delay(3000);

    
   Servo2.write(90);
   delay(100);
   Servo2.write(80);
   delay(100);
   Servo2.write(70);
   delay(100);
   Servo2.write(60);
   delay(100);
   Servo2.write(50);
   delay(100);
   Servo2.write(40);
   delay(100); 
   Servo2.write(30);
   delay(100); 
   Servo2.write(20);
   delay(100); 
   Servo2.write(10);
   delay(100); 
   Servo2.write(0);
   delay(2000);
   //ServoMotor1();
   //11111111111111111111111111111111111111

   //111111111111111111111111111111111111
   Servo1.write(0); 
   delay(100); 
   Servo1.write(10);
   delay(100); 
   Servo1.write(20);
   delay(100); 
   Servo1.write(30);
   delay(100); 
   Servo1.write(40);
   delay(100); 
   Servo1.write(50);
   delay(100); 
   Servo1.write(60);
   delay(100); 
   Servo1.write(70);
   delay(100); 
   Servo1.write(80);
   delay(100); 
   Servo1.write(90);
   delay(100); 
   Servo1.write(100);
   delay(100); 
   Servo1.write(110);
   delay(100); 
   Servo1.write(120);
   delay(100); 
   Servo1.write(130);
   delay(100); 
   Servo1.write(140);
   delay(1000); 
   Servo1.write(0);

   ////////////////////////////////////////2222222222
   //(1000);
   // Make servo go to 180 degrees 
   
   
}

/*
void ServoMotor2(){
   Servo1.write(50);
   delay(1000); 
   Servo1.write(0);
   delay(1000); 
   
   Servo2.write(0);
   delay(3000);
   Servo2.write(0); 
   delay(100); 
   Servo2.write(10);
   delay(100); 
   Servo2.write(20);
   delay(100); 
   Servo2.write(30);
   delay(100); 
   Servo2.write(40);
   delay(100); 
   Servo2.write(50);
   delay(100);
   Servo2.write(60);
   delay(100);
   Servo2.write(70);
   delay(100);
   Servo2.write(80);
   delay(100);
   Servo2.write(90);
   delay(100);
   Servo2.write(100);

   
   delay(3000);

    
   Servo2.write(90);
   delay(100);
   Servo2.write(80);
   delay(100);
   Servo2.write(70);
   delay(100);
   Servo2.write(60);
   delay(100);
   Servo2.write(50);
   delay(100);
   Servo2.write(40);
   delay(100); 
   Servo2.write(30);
   delay(100); 
   Servo2.write(20);
   delay(100); 
   Servo2.write(10);
   delay(100); 
   Servo2.write(0);
   delay(2000);
   ServoMotor1();
   
}

void ServoMotor1(){
  
   Servo1.write(0); 
   delay(100); 
   Servo1.write(10);
   delay(100); 
   Servo1.write(20);
   delay(100); 
   Servo1.write(30);
   delay(100); 
   Servo1.write(40);
   delay(100); 
   Servo1.write(50);
   delay(100); 
   Servo1.write(60);
   delay(100); 
   Servo1.write(70);
   delay(100); 
   Servo1.write(80);
   delay(100); 
   Servo1.write(90);
   delay(100); 
   Servo1.write(100);
   delay(1000);
   Servo1.write(0);
  
}

*/
