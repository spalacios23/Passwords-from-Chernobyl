
//included libraries
#include "SPI.h" //Includes library for SPI communication of display
#include "Adafruit_GFX.h" //Includes core graphics library
#include "Adafruit_SSD1351.h" //Includes hardware specific library

int val = 0;
int volatile val2 = 33;





extern const uint16_t logo[];

//screen dimensions
#define SCREEN_WIDTH 128 //pixel width
#define SCREEN_HEIGHT 128 //pixel height


//pin definitions
#define SCLK_PIN 13 //defines s clock pin
#define MOSI_PIN 11 //defines master-out slave-in SDA pin
#define RST_PIN   8 //defines reset pin
#define DC_PIN    7 //defines master-in slave-out pin
#define CS_PIN    10 //defines chip select pin

// Colour definitions
#define BLACK           0x0000
#define BLUE            0x001F
#define RED             0xF800
#define GREEN           0x07E0
#define CYAN            0x07FF
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0  
#define WHITE           0xFFFF
#define GREY            0x8410
#define ORANGE          0xE880


Adafruit_SSD1351 display = Adafruit_SSD1351(SCREEN_WIDTH, SCREEN_HEIGHT, &SPI, CS_PIN, DC_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  display.begin();
  display.fillScreen(BLACK);
  void setCursor(int16_t x0, int16_t y0);
  display.setTextColor(BLUE);
  void setTextSize(uint8_t size);
  void setTextWrap(boolean w);
  display.print("Passwords From Chernobyl");

  
  
  display.drawRGBBitmap(32,32,logo,64,64);
  display.setCursor(10, 105);
  display.print("By Gillio and Santi");
}
/*Figure this shit out*/


void loop() {
 
  for ( int j = 33; j < 127; ++j ) {
   val2 = j;
   attachInterrupt(0, gm_Pulse, FALLING);
   
  }
              
}

void gm_Pulse() {
  Serial.write(val2);
  
}
