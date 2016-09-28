boolean Boolean_State = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode (3,OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (7, INPUT_PULLUP);
  Serial.println ("This is working");
}

void loop() {
  Serial.println(digitalRead(7));
  if(digitalRead(7)== 0){
    digitalWrite(3, Boolean_State);
    digitalWrite(5, Boolean_State);
    Boolean_State = !Boolean_State;
    }
   if(digitalRead(7)== 1){
    digitalWrite(3, !Boolean_State);
    digitalWrite(5, !Boolean_State);
}
}
