#include "WiFi.h"
 
void setup()
{
    Serial.begin(115200);
 
    // Set WiFi to station mode and disconnect from an AP if it was previously connected
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);
 
    Serial.println("Setup done");
}
 
void loop()
{
    // Serial.println("scan start");
 
    // WiFi.scanNetworks will return the number of networks found
    int n = WiFi.scanNetworks();
    // Serial.println("scan done");
    if (n == 0) {
        Serial.println("no networks found");
    } else {
        // Serial.printf("%2s %-32s %-17s %s\n",
        //     "#", "SSID", "BSSID", "RSSI");
        for (int i = 0; i < n; ++i) {
          // if(WiFi.BSSIDstr(i)=="90:6C:AC:F9:87:D0"){
            // Print SSID and RSSI for each network found
            Serial.printf("%2u %-32s %s %d\n",
                i, WiFi.SSID(i).c_str(), WiFi.BSSIDstr(i).c_str(), WiFi.RSSI(i));
            delay(0.2);
          // }
        }
    }
    Serial.println("");
 
    // Wait a bit before scanning again
    delay(500);
}
