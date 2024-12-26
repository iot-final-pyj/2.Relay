#include <Arduino.h>

int RELAY = 23;
int SW = 15;
bool relayOn = false;

void setup(){    
    Serial.begin(115200);
    delay(500);
    Serial.println("Starting");
    pinMode(RELAY, OUTPUT);
    pinMode(SW, INPUT_PULLUP);
}

void loop(){
    delay(100);
    if (digitalRead(SW) == LOW) {
        relayOn = ! relayOn;
    }

    if (relayOn) {
        digitalWrite(RELAY, HIGH);
    } else {
        digitalWrite(RELAY, LOW);
    }
}
