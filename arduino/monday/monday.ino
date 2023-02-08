const int led_pin = 12;
const int button_pin = 2;
int button_state = 0;
int incomingByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}


void loop() {
  if(Serial.available() > 0){
    incomingByte = Serial.read();
    Serial.println(incomingByte);
    
    if(incomingByte == 97) {
      digitalWrite(led_pin, HIGH);
    } else {
      digitalWrite(led_pin, LOW);
    }
  }
}
