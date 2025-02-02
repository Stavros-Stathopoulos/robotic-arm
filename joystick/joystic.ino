const int X_pin = 0;
const int Y_pin = 5;
const int forward_led = 8;
const int back_led = 7;
const int right_led = 9;
const int left_led = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(forward_led, OUTPUT);
  pinMode(back_led, OUTPUT);
  pinMode(right_led, OUTPUT);
  pinMode(left_led, OUTPUT);
  Serial.begin(9600);
  digitalWrite(forward_led, HIGH);
  digitalWrite(back_led, HIGH);
  digitalWrite(right_led, HIGH);
  digitalWrite(left_led, HIGH);
  delay(500);
  digitalWrite(forward_led, LOW);
  digitalWrite(back_led, LOW);
  digitalWrite(right_led, LOW);
  digitalWrite(left_led, LOW);
}

void loop() {
  digitalWrite(forward_led, LOW);
  digitalWrite(back_led, LOW);
  digitalWrite(right_led, LOW);
  digitalWrite(left_led, LOW);
  // put your main code here, to run repeatedly:
  Serial.print("Joystic:  ");
  int check_x = analogRead(X_pin);
  int check_y = analogRead(Y_pin);
  Serial.print("X-AXIS: ");
  Serial.print(check_x);
  Serial.print("  Y-AXIS: ");
  Serial.print(check_y);
  if (check_x == 507 && check_y == 511){
    digitalWrite(forward_led, LOW);
    digitalWrite(back_led, LOW);
    digitalWrite(right_led, LOW);
    digitalWrite(left_led, LOW);
  }
  else if (check_x > 508){
    digitalWrite(forward_led, HIGH);
  }
  else if (check_y > 512){
    digitalWrite(right_led, HIGH);
  }
   else if (check_x < 506){
    digitalWrite(back_led, HIGH);
  }
  else if (check_y < 510){
    digitalWrite(left_led, HIGH);
  }
  else{
    digitalWrite(forward_led, LOW);
    digitalWrite(back_led, LOW);
    digitalWrite(right_led, LOW);
    digitalWrite(left_led, LOW);
  }
  Serial.print("\n\n\n");
  delay(50);

  
}
