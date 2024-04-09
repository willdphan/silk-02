// #include <Servo.h>
// #include <Arduino.h>


// // Servo myServo;  // Create servo object

// // void setup() {
// //   myServo.attach(9);  // Attaches the servo on pin 9
// //   Serial.begin(9600);
// // }

// // void loop() {
// //   myServo.write(0);   // Turn servo to 0 degrees
// //   delay(1000);        // Wait 1 second
// //   myServo.write(90);  // Turn servo to 90 degrees
// //   delay(1000);        // Wait 1 second
// //   myServo.write(180); // Turn servo to 180 degrees
// //   delay(1000);        // Wait 1 second
// // }

// #include <Servo.h>

// // Create a Servo object for each servo
// Servo servo2;
// Servo servo3;
// Servo servo4;
// Servo servo5;
// Servo servo6;
// Servo servo7;
// Servo servo8;
// Servo servo9;
// Servo servo10;

// // Array of servo objects for easier iteration
// Servo servos[] = {servo2, servo3, servo4, servo5, servo6, servo7, servo8, servo9, servo10};

// void setup() {
//   // Attach each servo to its corresponding pin
//   for(int i = 0; i < 9; i++) {
//     servos[i].attach(i + 2); // Servos are connected to pins 2 through 10
//   }
// }

// void loop() {
//   // Sequentially move each servo
//   for(int i = 0; i < 9; i++) {
//     servos[i].write(0);   // Move servo to 0 degrees
//     delay(1000);          // Wait for a second
//     servos[i].write(180); // Move servo to 180 degrees
//     delay(1000);          // Wait for a second
//   }
  
//   // Optional: Add a delay between cycles if you want to observe each cycle distinctly
//   delay(2000);
// }
