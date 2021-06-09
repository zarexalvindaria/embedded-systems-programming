/*
* Program name: LED Dimmer
* Description: This project creates a LED Dimmer program that 
*			   will perform an analog read from pin A0
*              and based on the reading (0 - 1023), 1024 possible 
*			   values, an analog write will be made to the LED (0-254),
*			   255 possible values.
* Author: ZAND (Zarex Alvin Daria)
* History:
* Date 		Description 		Programmer Name
* 05/6/2021 Started drafting 	ZAND
* 			and completed the 
*			program.
*/

int readPin=A0;
int LED=6; // LED pin
int baudRate=9600; // stated value on the Exercise
int waitTime=500; // 0.5 second
int volts=0; // initializing volts variable
int brightness=0; // initializing brightnness variable
int convertValue=4;

void setup()
{
  pinMode(readPin, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(baudRate);
}

void loop()
{
  // read the potentiometer input
  volts = analogRead(readPin);
  // calculate LED brightness: readValue /4 (from potentiometer) = writeValue (to LED)
  brightness = volts/convertValue;
  // perform analog write to the LED based on computed brightness
  analogWrite(LED, brightness);
  // print values to the serial monitor
  Serial.print("volts=");
  Serial.print(volts);
  Serial.print("  bright=");
  Serial.print(brightness);
  Serial.println("");
  //Delay for 0.5 second
  delay(waitTime);
}