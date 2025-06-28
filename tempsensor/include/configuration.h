#ifndef CONFIGURATION_H
#define CONFIGURATION_H

namespace Configuration
{
    enum class System
    {
        BAUD_RATE = 115200,
    };
    enum class Pin
    {
        BOARD_LED = 13,
        TEMP_SENSOR_PINRX = 2,
    };
}

#endif