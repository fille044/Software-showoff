#include "Arduino.h"

#define RGB_RED			14		// D5
#define RGB_GREEN		12		// D6
#define RGB_BLUE		13		// D7

#define GREEN_LED    	2      // D4
#define RED_BTN   		16     	// D0
#define GREEN_BTN		5		// D1
#define BLUE_BTN		4		// D2
#define SOUNDSENSOR		A0

void setup()
{
	pinMode(RED_BTN, INPUT);
	pinMode(GREEN_BTN, INPUT);
	pinMode(BLUE_BTN, INPUT);
	pinMode(GREEN_LED, OUTPUT);
	Serial.begin(115200);
}


void loop()
{
//Add your repeated code here
	int redvalue = digitalRead(RED_BTN);
	int greenvalue = digitalRead(GREEN_BTN);
	int bluevalue = digitalRead(BLUE_BTN);
	//Serial.println(greenvalue + redvalue + bluevalue);
	int soundvalue = analogRead(SOUNDSENSOR);
	//Serial.println(soundvalue);
	digitalWrite(GREEN_LED, HIGH);
	delay(200);
	digitalWrite(RGB_RED, HIGH);
	delay(500);
	digitalWrite(RGB_RED, LOW);
	delay(500);
	digitalWrite(RGB_GREEN, HIGH);
	delay(500);
	digitalWrite(RGB_GREEN, LOW);
	delay(500);
	digitalWrite(RGB_BLUE, HIGH);
	delay(500);
	digitalWrite(RGB_BLUE, LOW);

	digitalWrite(GREEN_LED, LOW);
	delay(500);
}
