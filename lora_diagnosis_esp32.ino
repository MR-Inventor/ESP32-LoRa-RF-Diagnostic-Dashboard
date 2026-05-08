#include <SPI.h>
#include <LoRa.h>

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

// ---------- TFT ----------
#define TFT_CS    15
#define TFT_RST   4
#define TFT_DC    22

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

// ---------- LORA ----------
#define LORA_SS    5
#define LORA_RST   14
#define LORA_DIO0  2

long counter = 0;

void drawUI() {

  tft.fillScreen(ST77XX_BLACK);

  // TITLE
  tft.setTextColor(ST77XX_GREEN);
  tft.setTextSize(2);

  tft.setCursor(10, 5);
  tft.println("LORA RF");

  // INFO
  tft.setTextSize(1);

  tft.setTextColor(ST77XX_YELLOW);

  tft.setCursor(5, 35);
  tft.print("Freq: 433MHz");

  tft.setCursor(5, 50);
  tft.print("Status: TX");

  tft.setCursor(5, 65);
  tft.print("Packets:");

  tft.setCursor(70, 65);
  tft.println(counter);

  tft.setCursor(5, 80);
  tft.print("TX Power: 17dBm");

  tft.setCursor(5, 95);
  tft.print("SF: 7");

  tft.setCursor(5, 110);
  tft.print("Uptime:");

  tft.setCursor(70, 110);
  tft.print(millis() / 1000);
  tft.print("s");

  // SIGNAL BARS
  int bars = (counter % 5) + 1;

  for (int i = 0; i < bars; i++) {

    tft.fillRect(
      120 + (i * 6),
      120 - (i * 10),
      4,
      i * 10,
      ST77XX_GREEN
    );
  }
}

void setup() {

  Serial.begin(115200);

  // TFT START
  tft.initR(INITR_BLACKTAB);

  tft.setRotation(1);

  tft.fillScreen(ST77XX_BLACK);

  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);

  tft.setCursor(15, 40);
  tft.println("BOOTING");

  delay(2000);

  // LORA START
  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);

  if (!LoRa.begin(433E6)) {

    tft.fillScreen(ST77XX_RED);

    tft.setCursor(10, 40);
    tft.println("LORA FAIL");

    while (1);
  }

  tft.fillScreen(ST77XX_BLACK);

  tft.setCursor(10, 40);
  tft.println("LORA OK");

  delay(1500);
}

void loop() {

  // SEND PACKET
  LoRa.beginPacket();

  LoRa.print("Packet ");
  LoRa.print(counter);

  LoRa.endPacket();

  Serial.print("Sent Packet: ");
  Serial.println(counter);

  // UPDATE SCREEN
  drawUI();

  counter++;

  delay(2000);
}