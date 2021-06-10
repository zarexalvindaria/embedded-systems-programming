/*
 * Program Name: 6-bit Binary Decoder
 * Description: This program is a 6-bit binary decoder that 
 				counts from 000000 to 111111 with a delay of 
                1 sec between numbers. Once 111111 is reached
                it will restart displaying from 000000. There
                is a 2 secs delay between 16 sets of binary 
                numbers.
 * Author: Zarex Alvin Daria 
 * Date: 05/24/2021
 */

int outPin01 = 2;
int outPin02 = 4;
int outPin03 = 7;
int outPin04 = 8;
int outPin05 = 12;
int outPin06 = 13;
int delayNumber = 1000; // 1 second
int delaySet = 2000; // 2 seconds
byte i = 0;
int baudRate = 9600;
String binStg = "Binary : ";
String decStg = " Decimal : ";
  
void setup()
{
  pinMode(outPin01, OUTPUT);
  pinMode(outPin02, OUTPUT);
  pinMode(outPin03, OUTPUT);
  pinMode(outPin04, OUTPUT);
  pinMode(outPin05, OUTPUT);
  pinMode(outPin06, OUTPUT);
  Serial.begin(baudRate);
}

void loop()
{
  // 0
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, LOW);
  i=0;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 1
  digitalWrite(outPin01, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 2
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 3
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 4
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 5
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 6
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 7
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 8
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 9
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 10
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 11
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 12
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 13
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 14
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 15
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delaySet); // Wait for 2 sec
  
  // 16
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 17
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 18
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 19
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 20
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 21
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 22
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 23
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 24
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 25
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 26
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 27
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 28
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 29
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 30
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 31
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delaySet); // Wait for 2 sec
  
  // 32
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 33
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 34
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 35
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 36
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 37
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 38
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 39
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 40
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 41
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 42
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 43
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 44
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 45
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 46
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 47
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, LOW);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delaySet); // Wait for 2 sec
  
  // 48
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 49
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 50
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 51
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 52
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 53
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 54
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 55
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, LOW);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 56
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 57
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 58
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 59
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, LOW);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 60
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 61
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, LOW);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 62
  digitalWrite(outPin01, LOW);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delayNumber); // Wait for 1 sec
  
  // 63
  digitalWrite(outPin01, HIGH);
  digitalWrite(outPin02, HIGH);
  digitalWrite(outPin03, HIGH);
  digitalWrite(outPin04, HIGH);
  digitalWrite(outPin05, HIGH);
  digitalWrite(outPin06, HIGH);
  i++;
  Serial.print(binStg);
  Serial.print(i, BIN);
  Serial.print(decStg);
  Serial.println(i);
  delay(delaySet); // Wait for 2 sec
}