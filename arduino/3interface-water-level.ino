#define ledPin 6
#define sensorPin A0
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}
void loop() {
  int sensorValue = analogRead(sensorPin);
  if (sensorValue > 570)  {
    int outputValue = map(sensorValue, 570, 800, 0, 255);
    Serial.println(outputValue);
    analogWrite(ledPin, outputValue); // generate PWM signal
  }
}
