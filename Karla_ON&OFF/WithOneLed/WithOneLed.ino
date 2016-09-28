int buttonPin = 7;     
int ledPin = 5;
    
int buttonState = 0;
boolean light = false;

void setup() {
  pinMode(ledPin, OUTPUT);        
  pinMode(buttonPin, INPUT_PULLUP);   
}

void loop(){
  buttonState = digitalRead(buttonPin);

  //If button pressed...
  if (buttonState == HIGH) { 
    if ( light == 0){
      digitalWrite(ledPin, HIGH);
      light = true;
    }
    else if ( light == true){
      // If the pin is conected to ground this variable should be 
      // digitalWrite (ledPin, LOW);
      digitalWrite(ledPin, HIGH);
      light = false;
    }    
  }
  }
