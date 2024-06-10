#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <ArduinoJson.h>

const char* ssid = "CHANGE"; //TODO: Put your your Wi-Fi ID
const char* password = "CHANGE"; //TODO: Put you own Wi-Fi password

#define BOTtoken "CHANGE" //TODO: Put your own telegram bot token

#define CHAT_ID "CHANGE" //TODO: Put your own Chat ID

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

const int waterLevelSensor = 4;  // D2 on the NOdeMCU Board
bool highLevelNotDetected;

// High water level detection
void ICACHE_RAM_ATTR detectsLevel() {
  highLevelNotDetected = digitalRead(waterLevelSensor);
}

void setup() {
  Serial.begin(9600);
  client.setInsecure();

  pinMode(waterLevelSensor, INPUT_PULLUP);                          

  // Attempt to connect to Wifi network:
  Serial.print("Connecting to Wifi: ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("");
  Serial.println("WiFi connection established");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  bot.sendMessage(CHAT_ID, "Bot starting", "");
}

void loop(){
    if (!digitalRead(waterLevelSensor)) {
    bot.sendMessage(CHAT_ID, "High water level!!!", "");
    delay(10000);
    } else delay(1000);
  
}

