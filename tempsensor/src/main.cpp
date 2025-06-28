#include <Arduino.h>
#include <configuration.h>
#include <macro.h>

void setup()
{
    Serial.begin(resolve_enum(Configuration::System::BAUD_RATE));
}

void loop()
{

}

