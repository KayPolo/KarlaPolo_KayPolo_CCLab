int potPin = 0; // Pin connected to the A0 port of Arduino
 
void setup(){
Serial.begin(9600);
}
 
void loop (){
int val = analogRead(potPin);
Serial.println(val);
delay(100);
}
