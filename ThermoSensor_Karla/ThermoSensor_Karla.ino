int sensorPin = A0;
int ledPin = 9;
int sensorVal;
int ledVal;

void setup() {
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorVal= analogRead(sensorPin);

  Serial.println(sensorVal);

 ledVal = map(sensorVal, 0, 1023, 0, 225);
 analogWrite (ledPin, ledVal);

}
