#ifndef MODULES_HPP
#define MODULES_HPP

#include "../pins.hpp"

#include "bmp388.hpp"
#include "bno055.hpp"
#include "lis3dh.hpp"

#include "../sd/sd.hpp"

enum Sensor {
    ALT,
    GPS,
    IMU,
    ACCEL
};

/**
 * Container for all sensor and SD card objects.
 */
namespace modules {
    extern BMP388 altimeter;
    extern BNO055 imu;
    extern LIS3DH accel;

    extern SD sd;
}; // namespace modules

#endif // MODULES_HPP