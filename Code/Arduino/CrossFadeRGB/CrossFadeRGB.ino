/*
 * This example fades the colors of the RGB LED
 * 
 * By Jon Froehlich
 * http://makeabilitylab.io
 * 
 * Adapted from https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds?view=all
 */

// Change this to 0 if you are working with a common cathode RGB LED
// We purchased common anode RGB LEDs for class: https://www.adafruit.com/product/159
const boolean COMMON_ANODE = true; 

const int RGB_RED_PIN = 6;
const int RGB_GREEN_PIN  = 5;
const int RGB_BLUE_PIN  = 3;
const int DELAY = 200; // delay in ms between changing colors

enum RGB{
  RED,
  GREEN,
  BLUE,
  NUM_COLORS
};

int _rgbLedValues[] = {255, 0, 0};
enum RGB _curFadingUp = GREEN;
enum RGB _curFadingDown = RED;
const int FADE_STEP = 5;

void setup() {
  // Set the RGB pins to output
  pinMode(RGB_RED_PIN, OUTPUT);
  pinMode(RGB_GREEN_PIN, OUTPUT);
  pinMode(RGB_BLUE_PIN, OUTPUT);

  // Turn on Serial so we can verify expected colors via Serial Monitor
  Serial.begin(9600); 

  setColor(_rgbLedValues[RED], _rgbLedValues[GREEN], _rgbLedValues[BLUE]);
}

void loop() {

  // For fading the RGB LED: https://gist.github.com/jamesotron/766994
  // For hooking up the RGB LED: https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds
  // Note that this Adafruit tutorial assumes a "common cathode" RGB LED but we are
  // using "common anode" RGBS in this class 
  if(_rgbLedValues[_curFadingUp] >= 255){
    _curFadingUp = (RGB)((int)_curFadingUp + 1);

    if(_curFadingUp > (int)BLUE){
      _curFadingUp = RED;
    }
  }

  if(_rgbLedValues[_curFadingDown] <= 0){
    _curFadingDown = (RGB)((int)_curFadingDown + 1);

    if(_curFadingDown > (int)BLUE){
      _curFadingDown = RED;
    }
  }

  _rgbLedValues[_curFadingUp] += FADE_STEP;
  _rgbLedValues[_curFadingDown] -= FADE_STEP;
  setColor(_rgbLedValues[RED], _rgbLedValues[GREEN], _rgbLedValues[BLUE]);

  delay(DELAY);
}

/**
 * setColor takes in values between 0 - 255 for the amount of red, green, and blue, respectively
 * where 255 is the maximum amount of that color and 0 is none of that color. You can illuminate
 * all colors by intermixing different combinations of red, green, and blue
 * 
 * This function is based on https://gist.github.com/jamesotron/766994
 * 
 */
void setColor(int red, int green, int blue)
{
  Serial.print("Setting color to");
  Serial.print(" RED=");
  Serial.print(red);
  Serial.print(" GREEN=");
  Serial.print(green);
  Serial.print(" BLUE=");
  Serial.println(blue);

  // If a common anode LED, invert values
  if(COMMON_ANODE == true){
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  }
  analogWrite(RGB_RED_PIN, red);
  analogWrite(RGB_GREEN_PIN, green);
  analogWrite(RGB_BLUE_PIN, blue);  
}
