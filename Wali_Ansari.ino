const int left_sensor=2;
const int right_sensor=3;
const int left_motor_forward=4;
const int left_motor_backward=5;
const int right_motor_forward=6;
const int right_motor_backward=7;

void setup() {
 // put your setup code here, to run once:
pinMode(left_sensor,INPUT);
pinMode(right_sensor,INPUT);
pinMode(left_motor_forward, OUTPUT);
pinMode(left_motor_backward, OUTPUT);
pinMode(right_motor_forward, OUTPUT);
pinMode(right_motor_backward, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead (left_sensor<500) &&  digitalRead(right_sensor<500)){ // forward
  digitalWrite(left_motor_forward,255);
  digitalWrite(right_motor_forward,255);
}
else if (digitalRead (left_motor_forward <500 ) && digitalRead (right_motor_forward >500)){ // right
  digitalWrite(left_motor_forward ,255);
  digitalWrite(right_motor_forward,0);
}
else if (digitalRead(left_motor_forward >500 ) && digitalRead (right_motor_forward<500)){ // left
  digitalWrite(left_motor_forward,0);
  digitalWrite(right_motor_forward,255);
}
else {
  digitalWrite(left_motor_forward,0);
  digitalWrite(right_motor_forward, 0);
}
}
