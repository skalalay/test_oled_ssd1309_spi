#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

#define LED_BUILTIN 2

int cnt = 0;

U8G2_SSD1309_128X64_NONAME0_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/5, /* dc=*/17, /* reset=*/16);

void setup() {
    u8g2.begin();
    u8g2.enableUTF8Print();
    u8g2.clearBuffer();
    u8g2.setCursor(0, 40);
    u8g2.setFont(u8g2_font_10x20_t_cyrillic);
    u8g2.print("ХУЙ ПИЗДА");
    u8g2.sendBuffer();

    // pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    delay(1000);  // wait for a second
    u8g2.clearBuffer();   
    u8g2.setCursor(0, 40); 
    u8g2.print(cnt);
    u8g2.sendBuffer();
    cnt++;
}