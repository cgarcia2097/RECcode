#include<Servo.h>

Servo myservo[3]; // Create array of servo objects

void claw_release(Servo servo, int force){
for (int pos = 0; pos <= force; pos += 1) { 
    servo.write(10);              
    delay(5); 
    servo.write(90);
  }
  }

void claw_grab(Servo servo, int force){
for (int pos = 0; pos <= force; pos += 1) { 
    
    servo.write(180);              
    delay(5); 
    servo.write(90);
      
  }
  
}

void crane_left(Servo servo){
  for (int pos = 0; pos <= 45; pos += 1) { 
    servo.write(100);              
    delay(5); 
    servo.write(90);
  }

 }

void crane_right(Servo servo){
  for (int pos = 0; pos <= 45; pos += 1) { 
    servo.write(70);              
    delay(5); 
    servo.write(90);
  }
}

void crane_down(Servo servo){
for (int pos = 0; pos <= 180; pos += 1) { 
    servo.write(0);              
    delay(5); 
    servo.write(90);
  }  

  
  }

void crane_lift(Servo servo){
    for (int pos = 0; pos <= 180; pos += 1) { 
    servo.write(180);              
    delay(5); 
    servo.write(90);
  }
}



void stop_servo(Servo servo){
  servo.write(90);
}

void setup() {
  // put your setup code here, to run once:

  // Initialize the servo pins
     myservo[0].attach(9);
     myservo[1].attach(3);
     myservo[2].attach(6);

/*
  stop_servo(myservo[1]);
  stop_servo(myservo[2]);    
  claw_grab(myservo[0], 45);
  delay(1000);
  claw_release(myservo[0], 45);
  delay(1000);

  stop_servo(myservo[0]);
  stop_servo(myservo[2]); 
 crane_left(myservo[1]);
  delay(1000);
  crane_right(myservo[1]);
  delay(1000);
  
  stop_servo(myservo[0]);
  stop_servo(myservo[1]); 
  crane_down(myservo[2]);
  delay(1000);
  crane_down(myservo[2]);
  delay(1000);
  crane_lift(myservo[2]);
  delay(5000);

*/

  stop_servo(myservo[1]);
  stop_servo(myservo[2]); 
  stop_servo(myservo[0]);

  /*crane_down(myservo[2]);
  delay(500);
  crane_down(myservo[2]);
  delay(500);
  claw_grab(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);
   crane_left(myservo[1]);
  delay(500);
  crane_down(myservo[2]);
  delay(500);
  claw_release(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  */

  crane_down(myservo[2]);
  delay(500);
  crane_down(myservo[2]);
  delay(500);
  claw_grab(myservo[0], 50);
  delay(500);
  crane_lift(myservo[1]); 
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);

  crane_down(myservo[2]);
  delay(500);
  claw_release(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);

  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);

  crane_down(myservo[1]);
  delay(500);
  claw_grab(myservo[0], 45);
  delay(500);
  crane_lift(myservo[1]);
  delay(500);

  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);

  crane_down(myservo[2]);
  delay(500);
  claw_release(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);

  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);

  crane_down(myservo[2]);
  delay(500);
  claw_grab(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);

  crane_right(myservo[1]);
  delay(500);
  crane_right(myservo[1]);
  delay(500);

  crane_down(myservo[2]);
  delay(500);
  claw_release(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);

  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);

  crane_down(myservo[2]);
  delay(500);
  claw_grab(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);

  crane_left(myservo[1]);
  delay(500);
  crane_left(myservo[1]);
  delay(500);

  crane_down(myservo[2]);
  delay(500);
  claw_release(myservo[0], 45);
  delay(500);
  crane_lift(myservo[2]);
  delay(500);

  crane_lift(myservo[2]+);
  delay(500);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  int angle;
  // Servos: <90 makes servo go in one direction
  //         >90 make servo go forward
} 
