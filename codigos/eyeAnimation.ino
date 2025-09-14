#include <Adafruit_GFX.h>
#include <Adafruit_GC9A01A.h>
#include "eye.h"

// Pinos para ESP32C3-2424S012
#define TFT_MOSI 7
#define TFT_SCLK 6
#define TFT_CS   10
#define TFT_DC   2
#define TFT_RST  -1 // sem pino de reset
#define TFT_BL   3  // backlight

// Inicialização via software SPI
Adafruit_GC9A01A tft(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void setup() {
  Serial.begin(115200);
  delay(100);

  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);  // Liga o backlight

  tft.begin();
  tft.setRotation(0); // você pode ajustar para 1, 2 ou 3 conforme a orientação desejada
  tft.fillScreen(GC9A01A_BLACK);

  delay(200);

  Serial.println("Exibindo imagem do olho...");

  // Exibir imagem usando drawRGBBitmap()
  tft.drawRGBBitmap(0, 0, eyeImage, 240, 240);
}

void loop() {
  // Nada por enquanto
}
