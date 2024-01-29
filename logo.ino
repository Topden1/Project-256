#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const unsigned char bitmap_z24uil[] PROGMEM = {
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B10000000,B00011111,B11111111,B11111111,B10000000,B00111111,B11001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000111,B11111111,B11111100,B00000000,B00000111,B11001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111000,B00000000,B00000001,B11111111,B11110000,B00000000,B00000011,B11011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B11111111,B11100000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00111111,B11000000,B00000000,B00000000,B01111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11000000,B00011111,B10000000,B00011111,B10000000,B00011111,B00000000,B00111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B10000000,B01111111,B11100000,B00001111,B00000000,B11111111,B11100000,B00111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B00000001,B11111111,B11111000,B00001110,B00000011,B11111111,B11110000,B00011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B00000011,B11111111,B11111100,B00000100,B00000111,B11111111,B11111000,B00001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111110,B00000111,B11111111,B11111110,B00000000,B00001111,B11111111,B11111100,B00001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111110,B00000111,B11111111,B11111111,B00000000,B00011111,B11110001,B11111110,B00001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111110,B00001111,B11111111,B11111111,B10000000,B00011111,B11100001,B11111110,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111100,B00001111,B11111111,B11111111,B10000000,B00111111,B11100001,B11111110,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111100,B00001111,B11000000,B00011111,B11000000,B01111111,B00000000,B00111111,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111100,B00001111,B10000000,B00011111,B11100000,B01111111,B00000000,B00111111,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111100,B00001111,B10000000,B00011111,B11000000,B01111111,B00000000,B00111110,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111100,B00001111,B11111111,B11111111,B11000000,B00111111,B11100001,B11111110,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111110,B00001111,B11111111,B11111111,B10000000,B00011111,B11110001,B11111110,B00000111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111110,B00000111,B11111111,B11111111,B00000000,B00011111,B11100001,B11111110,B00001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111110,B00000111,B11111111,B11111110,B00000000,B00001111,B11111111,B11111100,B00001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B00000011,B11111111,B11111100,B00000100,B00000111,B11111111,B11111000,B00001111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B00000001,B11111111,B11111000,B00000110,B00000011,B11111111,B11110000,B00011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B10000000,B11111111,B11100000,B00001111,B00000000,B11111111,B11100000,B00111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11000000,B00011111,B10000000,B00011111,B10000000,B00111111,B10000000,B00111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00111111,B11000000,B00000000,B00000000,B01111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B11111111,B11100000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111000,B00000000,B00000001,B11111111,B11110000,B00000000,B00000011,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000111,B11111111,B11111100,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B10000000,B00011111,B11111111,B11111111,B00000000,B00011111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11101111,B11000111,B11101111,B11101111,B01111111,B11110111,B10111110,B01111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11000011,B10000001,B11000000,B11000110,B01100000,B00100011,B00011000,B00111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11000011,B10001000,B11001000,B01000110,B01111000,B11100001,B10010001,B00011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11000011,B10011100,B11001100,B01000110,B01111001,B11100001,B10010011,B10011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11011001,B10001000,B11001110,B01000110,B01111000,B11100000,B10010011,B10011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B10010001,B10000001,B11001100,B01000110,B01111000,B11100100,B00010011,B10011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B10000001,B10000001,B11001100,B01000110,B01111001,B11100010,B00010011,B10011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B10011000,B10011000,B11000000,B11100000,B01100000,B00100010,B00010000,B00011111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B00111000,B10011000,B11000001,B11100000,B11100000,B00100111,B00011000,B00111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000
};




void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  };
  
  delay(2000);         // wait two seconds for initializing
  display.clearDisplay(); // clear display


  display.drawBitmap(0, 0, arduino_icon, 128, 64, WHITE);

  
  
  display.display(); 
}

void loop() {
}