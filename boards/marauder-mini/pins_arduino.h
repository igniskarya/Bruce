#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

static const uint8_t TX = 43;
static const uint8_t RX = 44;

// static const uint8_t TXD2 = 21;
// static const uint8_t RXD2 = 22;

static const uint8_t SDA = 13;
static const uint8_t SCL = 15;

// Modified elsewhere
static const uint8_t SS = -1;
static const uint8_t MOSI = -1;
static const uint8_t MISO = -1;
static const uint8_t SCK = -1;

static const uint8_t G0 = 0;
static const uint8_t G1 = 1;
static const uint8_t G2 = 2;
static const uint8_t G3 = 3;
static const uint8_t G4 = 4;
static const uint8_t G5 = 5;
static const uint8_t G6 = 6;
static const uint8_t G7 = 7;
static const uint8_t G8 = 8;
static const uint8_t G9 = 9;
static const uint8_t G10 = 10;
static const uint8_t G11 = 11;
static const uint8_t G12 = 12;
static const uint8_t G13 = 13;
static const uint8_t G14 = 14;
static const uint8_t G15 = 15;
static const uint8_t G39 = 39;
static const uint8_t G40 = 40;
static const uint8_t G41 = 41;
static const uint8_t G42 = 42;
static const uint8_t G43 = 43;
static const uint8_t G44 = 44;
static const uint8_t G46 = 46;

static const uint8_t ADC1 = 7;
static const uint8_t ADC2 = 8;

//#define RGB_LED 2

#define HAS_RGB_LED 1
#define RGB_LED 2
#define LED_TYPE WS2812B
#define LED_ORDER GRB
#define LED_TYPE_IS_RGBW 0
#define LED_COUNT 16

// SERIAL (GPS) dedicated pins
#define BAD_TX 43
#define BAD_RX 44

#define SERIAL_RX 44
#define SERIAL_TX 43

#define HAS_BTN 1
#define SEL_BTN 34
#define UP_BTN 36
#define DW_BTN 35
#define R_BTN 39
#define L_BTN 26
#define HAS_5_BUTTONS
#define BTN_ALIAS "\"Ok\""
#define BTN_ACT LOW

#define USER_SETUP_LOADED 1
#define ILI9341_DRIVER 1
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS 17
#define TFT_DC 16
#define TFT_RST 5
#define TFT_BL 32
#define TFT_BACKLIGHT_ON HIGH
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 16000000
#define SPI_TOUCH_FREQUENCY 2500000
#define TOUCH_CS -1

#define LED -1
#define LED_ON HIGH
#define LED_OFF LOW

#define CC1101_GDO2_PIN 22
#define CC1101_GDO0_PIN 15
#define CC1101_SS_PIN 27
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN

#define NRF24_CE_PIN 15
#define NRF24_SS_PIN 27
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

#define FP 1
#define FM 2
#define FG 2

#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT 160

#define SDCARD_CS 21
#define SDCARD_SCK 14
#define SDCARD_MISO 12
#define SDCARD_MOSI 13

#define GROVE_SDA 33
#define GROVE_SCL 25

#define SPI_SCK_PIN 18
#define SPI_MISO_PIN 19
#define SPI_MOSI_PIN 23
#define SPI_SS_PIN 1

#endif /* Pins_Arduino_h */
