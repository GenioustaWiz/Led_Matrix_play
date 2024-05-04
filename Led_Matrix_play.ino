//This is for testing All LEDS are okey
//Lights All Leds
//Columns
int shiftPin1 = 3; //Arduino pin connected to Clock Pin 11 of 74HC595
int storePin1 = 2; //Arduino pin connected to Latch Pin 12 of 74HC595
int dataPin1 = 4;  //Arduino pin connected to Data Pin 14 of 74HC595

//Rows
int shiftPin2 = 6; //Arduino pin connected to Clock Pin 11 of 74HC595
int storePin2 = 5; //Arduino pin connected to Latch Pin 12 of 74HC595
int dataPin2 = 7;  //Arduino pin connected to Data Pin 14 of 74HC595
void store(){
  digitalWrite(storePin1, HIGH);
  digitalWrite(storePin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(storePin1, LOW);
  digitalWrite(storePin2, LOW);
  delayMicroseconds(10);
}

void setup() {
 pinMode(dataPin1, OUTPUT);
 pinMode(dataPin2, OUTPUT);
 pinMode(shiftPin1, OUTPUT);
 pinMode(shiftPin2, OUTPUT);
 pinMode(storePin1, OUTPUT);
 pinMode(storePin2, OUTPUT);

 shiftOut(dataPin1, shiftPin1,  MSBFIRST,255);
 shiftOut(dataPin2, shiftPin2, MSBFIRST,255);
 store();
}

void loop() {
  // put your main code here, to run repeatedly:

}
