int photoPin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(photoPin);
  // Serial.println("light:");
  // Serial.println(light);
  
  // read the input on analog pin 0
  int sensorValue = analogRead(A0);  

  // print out the value you read:
  // Serial.println("sensorValue: ");
  // Serial.println(sensorValue);

  if(sensorValue < 20 && light < 20){
    Serial.println("right object");
  } else if (light < 20 && sensorValue > 20){
    Serial.println("wrong object");
  } else {
    Serial.println("no object");
  }

  delay(100);
}