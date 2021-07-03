/*
  * Program name: 4 Way Traffic Light
  * Description: This project simulates a 4-way traffic light.
  * The sequence of the traffic light, is as follows:
  * first green lights up for 30 sec then turns off,
  * upon green light turns off, yellow will light for
  * 3 seconds then turns off, upon yellow light turns off,
  * red will light up for 30 seconds and turns off.
  * This cycle will be repeated. Both left and right
  * traffic lights have the same sequence. This sequence
  * is also applied to top and bottom traffic lights,
  * except that when both left and right traffic green
  * lights are lighted, top and bottom red lights should
  * be lighted. When top and bottom green lights are lighted
  * both red lights of left and right should be lighted.
  * Author: ZAND (Zarex Alvin Daria)
  * History:
  * Date 		Description 			Programmer Name
  * 04/10/2021 	Started drafting 		ZAND
  * 			the program.
  * 04/11/2021 	Modified the longWait 	ZAND
  * 			value and some codes
  * 			to align with requirements.
  */


int led_red1 = 12;
int led_yellow1 = 8;
int led_green1 = 7;
int led_red2 = 13;
int led_yellow2 = 4;
int led_green2 = 2;
int longWait = 30000; // 30-sec
int shortWait = 3000; // 3-sec

void setup()
{
  pinMode(led_red1, OUTPUT); // top and bottom red led
  pinMode(led_yellow1, OUTPUT); // top and bottom yellow led
  pinMode(led_green1, OUTPUT); //top and bottom green led
  pinMode(led_red2, OUTPUT); // left and right red led
  pinMode(led_yellow2, OUTPUT); // left and right yellow led
  pinMode(led_green2, OUTPUT); // left and right green led
}

void loop()
{
  digitalWrite(led_green1, HIGH); // lights top & bottom green led
  digitalWrite(led_red2, HIGH); // lights left & right red led
  delay(longWait); // 30-sec wait
  digitalWrite(led_green1, LOW); // turn off top and bottom green led
  digitalWrite(led_red2, LOW); // lights left & right red led **
  digitalWrite(led_yellow1, HIGH); // lights top and bottom yellow led
  delay(shortWait); // 3-sec wait
  digitalWrite(led_yellow1, LOW); // turn off top and bottom yellow led
  digitalWrite(led_red1, HIGH); // lights top and bottom red led
  digitalWrite(led_green2, HIGH); // lights left and right green led
  delay(longWait); // 30-sec wait
  digitalWrite(led_red1, LOW); // turn off top and bottom red led **
  digitalWrite(led_green2, LOW); // turn off left and right green led
  digitalWrite(led_yellow2, HIGH); // lights left and right yellow led
  delay(shortWait); // 3-sec wait
  digitalWrite(led_yellow2, LOW); // turn off left and right yellow led
}
