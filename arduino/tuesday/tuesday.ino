/* 
 * 1. Light Sensing example

const int led_out = 9;
const int light_in = A0;
int light;
int cds;

void setup() {
  Serial.begin(9600);
  pinMode(led_out, OUTPUT);
  pinMode(light_in, INPUT);
}


void loop() {
  light = analogRead(light_in);
  Serial.println(light);
  cds = map(light, 0, 200, 0, 255);
  cds = constrain(cds, 0, 255);
  
  analogWrite(led_out, 255 - cds);
  
  delay(500);
  
}
*/

/*
 * 2. Serve moter example
 */

//#include <Servo.h>
//
//const int serv_M_out = 9;
//Servo servo;
//int angle = 0; // servo position in degrees
//
//void setup(){
//  servo.attach(serv_M_out);
//}
//
//void loop()
//{
//  for(angle = 0; angle < 180; angle++){
//    servo.write(angle);
//    delay(5);
//  }
//  
//  for(angle = 0; angle < 180; angle++){
//    servo.write(180 - angle);
//    delay(5);
//  }
//}


const int pedalSensor = A0;
int pedalVal = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pedalVal = analogRead(pedalSensor);
  Serial.print(pedalVal);
  Serial.print("\t");
  pedalVal = map(pedalVal, 230, 850, 0, 255);
  Serial.print(pedalVal);
  Serial.print("\t");
  pedalVal = constrain(pedalVal, 0, 255);
  Serial.println(pedalVal);
}
