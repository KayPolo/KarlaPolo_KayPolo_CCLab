int buttonPin = 7;     
int ledPin1 = 5;
int ledPin2 = 3; 
    
int buttonState = 0;
boolean light = false;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);           
  pinMode(buttonPin, INPUT_PULLUP);   
}

void loop(){
  buttonState = digitalRead(buttonPin);

  //If button pressed...
  if (buttonState == LOW) { 
    if ( light == 0){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      light = true;
    }
    else if ( light == true){
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      light = false;
    }    
  }
  }
