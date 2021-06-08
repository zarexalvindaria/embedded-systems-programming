int greenLedPin = 4;
int redLedPin = 2;
int switchOne = 13;
int switchTwo = 12;
const int baudRate = 9600;
int switchOneStatus=0;
int switchTwoStatus=0;
int switchGate = 0;

void setup()
{
  Serial.begin(baudRate);
  pinMode(greenLedPin, OUTPUT);
  pinMode(switchOne, INPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(switchTwo, INPUT);
}

void loop()
{
  Serial.println("AND/OR gate simulator");
  Serial.println("Main Menu");
  Serial.println("1. AND");
  Serial.println("2. OR");
  Serial.println("Please enter your choice:");
  
  while (Serial.available() == 0) {} // pause program while waiting for user input
  
  switchGate = Serial.parseInt(); // save user input as switchGate
  switchOneStatus = digitalRead(switchOne); // gets switchOne state
  switchTwoStatus = digitalRead(switchTwo); // gets switchTwo state
  
  // execute AND GATE if user inputs 1
  if (switchGate == 1) { 
    
    // turn on green Led only if 2 switches are on
	if ((switchOneStatus == HIGH) && (switchTwoStatus == HIGH)) {
	  digitalWrite(greenLedPin, HIGH);
      digitalWrite(redLedPin, LOW);
	} // if switch status

	else { // turn off green and turn on red otherwise
	  digitalWrite(redLedPin, HIGH);
      digitalWrite(greenLedPin, LOW);
	} //else
  } // if switchgate
  
  // execute OR GATE if user inputs 2
  else if (switchGate == 2) {

    // if either of the 2 switches are ON turn on greenLed
    if ((switchOneStatus == HIGH) || (switchTwoStatus == HIGH)){
      digitalWrite(greenLedPin, HIGH);
      digitalWrite(redLedPin, LOW);
    } // if 
    
    // if 2 switches are off, turn off green and turn on red
    else if ((switchOneStatus == LOW) && (switchTwoStatus == LOW)){
      digitalWrite(redLedPin, HIGH);
      digitalWrite(greenLedPin, LOW);
    } // else if
    
    else {
      digitalWrite(greenLedPin, HIGH);
      digitalWrite(redLedPin, LOW);
    }
  } // else if switchGate is 2
  
  else {
	Serial.println("Please select a valid number!");
  } // else
  
} // void loop

