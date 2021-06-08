/*
 * Program Name: AND-OR gate simulator
 * Description: A program that generates a menu and allows the user to choose
 * between the two gates. The program will lit either the green LED (True) or
 * red LED (False), depending on what values of the switches are (on or off) 
 * and what gate was chosen by the user.
 * Author: Zarex Alvin Daria (ZAND)
 * History:
 * Date:		Description: 						Programmer:
 * 06/07/2021	Added the necessary components		ZAND
 * 06/08/2021	Added the code and do some testing	ZAND
 */

// initialize variables

const int greenLedPin = 4;
const int redLedPin = 2;
const int switchOne = 13;
const int switchTwo = 12;
const int baudRate = 9600;
int switchOneStatus = 0;
int switchTwoStatus = 0;
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
  switchOneStatus = digitalRead(switchOne); // get switchOne status
  switchTwoStatus = digitalRead(switchTwo); // get switchTwo status
  
  // execute AND GATE if user inputs 1
  if (switchGate == 1) {
    Serial.println("\nAND gate selected!\n"); // prints the selected gate
    
    // turn on green Led only if 2 switches are on
	if ((switchOneStatus == HIGH) && (switchTwoStatus == HIGH)) {
	  digitalWrite(greenLedPin, HIGH); // turn on green led
      digitalWrite(redLedPin, LOW); // turn off red led
	} // if switch status

	else { //Otherwise, turn off green and turn on red 
	  digitalWrite(redLedPin, HIGH);
      digitalWrite(greenLedPin, LOW);
	} //else
    
  } // if switchgate
  
  // execute OR GATE if user inputs 2
  else if (switchGate == 2) {
    Serial.println("\nOR gate selected!\n"); // prints the selected gate

    // if either of the 2 switches are ON turn on greenLed
    if ((switchOneStatus == HIGH) || (switchTwoStatus == HIGH)){
      digitalWrite(greenLedPin, HIGH); // turn on green led
      digitalWrite(redLedPin, LOW); // turn off red led
    } // if switch status
    
    else { // turn off green and turn on red
      digitalWrite(redLedPin, HIGH);
      digitalWrite(greenLedPin, LOW);
    } // else
    
  } // else if switch gate
  
  else {
	Serial.println("Please select a valid number!\n");
  } // else switch gate
  
} // void loop

