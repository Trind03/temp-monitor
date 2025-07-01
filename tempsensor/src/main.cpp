#include <Arduino.h>
#include <configuration.h>
#include <macro.h>
#include <DHT.h>

void setup()
{
    Serial.begin(resolve_enum(Configuration::System::BAUD_RATE));
    
}

void loop()
{
    Serial.println(x);
    delay(1000);
}

