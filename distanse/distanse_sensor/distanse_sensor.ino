const int distanse_sens = 6;
void setup() {
  pinMode(distanse_sens, INPUT);
  Serial.begin(9600);
}

void loop() {
  int dist =  digitalRead(distanse_sens);
  if (dist == HIGH){
    Serial.print("Not an object\n");
  } else{
    Serial.print("Object Found!\n");
  }

  delay(1000);

}
