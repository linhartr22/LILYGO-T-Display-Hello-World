#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI g_Display;

void setup() {
  Serial.begin(115200);
  Serial.println("Hello World!");

  g_Display.init();
  g_Display.setRotation(3);
  g_Display.fillScreen(TFT_BLUE);
  g_Display.setTextColor(TFT_WHITE,TFT_BLUE);
  g_Display.textsize=3;
  g_Display.println();
  g_Display.println();
  g_Display.println("   Hello");
  g_Display.println("   World!");
}

void loop() {
    
}
