/*************************************************************

  This is a simple demo of sending and receiving some data.
  Be sure to check out other examples!
 *************************************************************/

// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLUuDHqkwE"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "Bq1ceJzgugeGpIa-2lhVtRuCd3apk9ml"
#include <Arduino.h>
#include "PinDefinitionsAndMore.h" // Define macros for input and output pin etc.
#include <IRremote.hpp>

// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
//#include "techmonke_smartIR\SendRawDemo_menu\SendRawDemo_menu.ino"
char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Speed";
char pass[] = "3357799511";

BlynkTimer timer;
BLYNK_WRITE(V3) //OFF
{
  const uint16_t rawData[] = {1044, 558,  1046, 558,  1050, 2552,  1046, 2556,  1072, 532,  1046, 556,  1048, 2554,  1048, 2554,  1072, 532,  1072, 2530,  1050, 554,  1072, 530,  1074, 2530,  1072, 530,  1074, 530,  1074, 530,  1048, 556,  1070, 532,  1066, 536,  1044, 560,  1040, 564,  1038, 564,  1014, 590,  1038, 566,  1038, 566,  1038, 568,  1036, 566,  1038, 2566,  1038, 2566,  1038, 2564,  1036, 568,  1036, 566,  1038, 566,  1040, 564,  1042, 2562,  1068, 2536,  1066, 2538,  1064, 540,  1064, 2540,  1060, 2542,  1038, 566,  1036, 568,  1034, 2568,  1034, 2568,  1034, 2568,  1032, 572,  1032, 2572,  1030, 2574,  1028, 574,  1030, 576,  1026, 2594,  1008, 2596,  1006, 2596,  1004, 600,  1004, 2600,  1002, 2600,  1000, 602,  1002, 604,  1000, 602,  1002, 2602,  1002, 602,  1000, 604,  1000, 604,  1000, 2602,  1000, 602,  1000, 604,  1000, 604,  1000, 604,  1000, 604,  998, 606,  998, 606,  998, 604,  998, 2606,  998, 604,  1000, 2628,  974, 604,  998, 606,  998, 2626,  974, 2628,  974, 630,  974};  // VOLTAS
    IrSender.sendRaw(rawData, sizeof(rawData) / sizeof(rawData[0]), NEC_KHZ);
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
Serial.print(value);
}

BLYNK_WRITE(V1) //ON
{
  const uint16_t rawData[] = {3418, 3314,  448, 1222,  476, 372,  424, 1244,  452, 1218,  450, 344,  504, 398,  448, 1220,  450, 396,  450, 1218,  452, 396,  424, 1244,  450, 398,  424, 1244,  424, 1272,  446, 1222,  422, 426,  416, 432,  388, 1280,  388, 460,  388, 434,  384, 1310,  386, 1284,  408, 438,  410, 1260,  410, 1286,  410, 412,  410, 436,  410, 1286,  382, 438,  410, 438,  408, 436,  384, 1286,  412, 1258,  412, 1284,  438, 1232,  438, 1258,  410, 408,  438, 410,  438, 408,  438, 382,  440, 1256,  438, 382,  436, 410,  436, 1260,  408, 1260,  434, 414,  406, 414,  434, 414,  432, 1236,  434, 1262,  432, 1236,  432, 1264,  380, 440,  408, 1288,  406, 416,  404, 442,  406, 442,  404, 418,  404, 444,  404, 444,  404, 444,  376, 446,  400, 446,  402, 448,  398, 442,  380, 466,  380, 466,  380, 440,  380, 468,  380, 468,  380, 468,  352, 468,  378, 468,  378, 470,  350, 470,  376, 470,  376, 472,  374, 446,  374, 474,  374, 474,  372, 448,  372, 474,  372, 474,  374, 474,  346, 474,  374, 474,  372, 476,  372, 450,  372, 476,  372, 476,  372, 450,  372, 1322,  372, 476,  346, 474,  372, 474,  372, 476,  344, 1324,  372, 1296,  372, 476,  372, 476,  372, 476,  344, 1324,  370, 476,  344, 476,  370};  // VOLTAS
 IrSender.sendRaw(rawData, sizeof(rawData) / sizeof(rawData[0]), NEC_KHZ);
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
Serial.print(value);
}


BLYNK_WRITE(V4) //20
{
  uint16_t rawData[] = {1030, 576,  1004, 598,  1006, 2594,  1006, 2596,  1030, 574,  1006, 598,  1002, 2596,  1008, 2598,  1004, 600,  1002, 2600,  1008, 596,  1002, 602,  1002, 2598,  1004, 600,  1028, 576,  1004, 602,  1024, 2578,  1002, 602,  1000, 602,  1002, 626,  978, 626,  978, 626,  978, 624,  978, 626,  978, 626,  1002, 600,  978, 628,  1002, 2600,  1002, 602,  1002, 2600,  1002, 602,  978, 626,  978, 626,  1002, 602,  1004, 2600,  976, 2624,  1002, 2602,  1002, 602,  1002, 2600,  1002, 2600,  978, 626,  1002, 602,  1002, 2602,  1000, 2602,  1002, 2600,  978, 626,  1004, 2600,  1002, 2600,  1002, 602,  1002, 600,  980, 2624,  1002, 2600,  1002, 2600,  1002, 602,  1000, 2602,  976, 2626,  1000, 604,  1002, 602,  1000, 604,  978, 2624,  976, 628,  1000, 602,  1000, 602,  1006, 2596,  1002, 600,  1002, 602,  1002, 604,  1002, 600,  1002, 602,  1000, 602,  1002, 602,  1002, 602,  1002, 602,  1002, 602,  1000, 2602,  1002, 602,  1002, 2600,  1000, 2602,  976, 2626,  1002, 602,  1000};  // VOLTAS
IrSender.sendRaw(rawData, sizeof(rawData) / sizeof(rawData[0]), NEC_KHZ);
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
Serial.print(value);
}

BLYNK_WRITE(V5) //25
{
uint16_t rawData[] = {9004, 4520,  552, 588,  546, 612,  522, 588,  546, 614,  520, 614,  522, 612,  522, 614,  520, 1694,  550, 1694,  550, 1696,  548, 1696,  550, 1696,  550, 1696,  550, 1696,  550, 1696,  550, 614,  522, 1694,  550, 588,  546, 614,  522, 614,  522, 614,  520, 614,  522, 588,  546, 612,  522, 614,  522, 1696,  548, 1696,  548, 1694,  550, 1694,  550, 1696,  550, 1694,  550, 1694,  552};  // NEC 1FE807F
IrSender.sendRaw(rawData, sizeof(rawData) / sizeof(rawData[0]), NEC_KHZ);
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
Serial.print(value);
}


// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V0) //PROJECTOR MENU
{
  const uint16_t rawData[] = {9046, 4462,  604, 514,  606, 514,  606, 514,  604, 514,  604, 516,  604, 514,  602, 516,  604, 518,  604, 514,  580, 540,  576, 544,  576, 544,  572, 1678,  546, 1704,  546, 574,  542, 578,  542, 1708,  540, 1710,  564, 1686,  564, 1684,  566, 554,  564, 556,  564, 554,  564, 556,  564, 554,  564, 554,  564, 556,  564, 556,  562, 1688,  562, 1686,  564, 1688,  564, 1688,  562, 46906,  9002, 4504,  564, 554,  564, 556,  564, 554,  564, 554,  564, 554,  564, 556,  564, 554,  564, 556,  564, 554,  564, 554,  564, 554,  564, 554,  564, 1688,  564, 1686,  564, 556,  564, 556,  566, 1686,  566, 1686,  564, 1686,  566, 1684,  566, 552,  590, 530,  590, 528,  590, 530,  566, 552,  590, 528,  590, 528,  574, 546,  590, 1662,  588, 1662,  590, 1660,  566, 1686,  566}; // Using exact NEC timing
    IrSender.sendRaw(rawData, sizeof(rawData) / sizeof(rawData[0]), NEC_KHZ);
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();
Serial.print(value);
  // Update state
}

// This function is called every time the device is connected to the Blynk.Cloud
BLYNK_CONNECTED()
{
  // Change Web Link Button message to "Congratulations!"
  Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
  Blynk.setProperty(V3, "onImageUrl",  "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
  Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk/how-quickstart-device-was-made");
}

// This function sends Arduino's uptime every second to Virtual Pin 2.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V2, millis() / 1000);
}

void setup()
{
  // Debug console
   pinMode(LED_BUILTIN, OUTPUT);

    Serial.begin(115200);
    #if defined(__AVR_ATmega32U4__) || defined(SERIAL_PORT_USBVIRTUAL) || defined(SERIAL_USB) /*stm32duino*/|| defined(USBCON) /*STM32_stm32*/|| defined(SERIALUSB_PID) || defined(ARDUINO_attiny3217)
        delay(4000); // To be able to connect Serial monitor after reset or power up and before first print out. Do not wait for an attached Serial Monitor!
    #endif
        // Just to know which program is running on my Arduino
        Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));
    
    #if defined(IR_SEND_PIN)
        IrSender.begin(); // Start with IR_SEND_PIN as send pin and enable feedback LED at default feedback LED pin
    #else
        IrSender.begin(3, ENABLE_LED_FEEDBACK); // Specify send pin and enable feedback LED at default feedback LED pin
    #endif

    Serial.println(F("Ready to send IR signals at pin "  STR(IR_SEND_PIN)));

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
  timer.setInterval(1000L, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run();
   // Note the approach used to automatically calculate the size of the array.
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}
