#ifndef STATE_HPP
#define STATE_HPP

// clang-format off
#include "flight.hpp"
#include "../constants.hpp"
#include <stdint.h>
// clang-format on

#include "../sd/sd.hpp"

enum SensorState {
    OFF = 0,
    VALID,
    INVALID
};

/**
 * Container for the current flight state. Contains sensor data,
 * sensor statuses, and flight level data.
 */
namespace state {
    namespace flight {
        extern uint32_t cycle_count;
        extern uint32_t timestamp;

        extern int boot_count;
    } // namespace flight
    namespace alt {
        extern enum SensorState status;
        extern bool failed_init;
        extern uint8_t failed_reads;

        extern float pressure;
        extern float altitude;

        extern float ref_pressure;
    } // namespace alt
    namespace gps {
        extern enum SensorState status;
        extern bool failed_init;
        extern uint8_t failed_reads;

        extern bool valid;
        extern int32_t latitude;
        extern int32_t longitude;
        extern int32_t altitude;
        extern uint8_t siv;
    } // namespace gps
    namespace imu {
        extern enum SensorState status;
        extern bool failed_init;
        extern uint8_t failed_reads;

        extern float accel_x;
        extern float accel_y;
        extern float accel_z;

        extern float gyro_x;
        extern float gyro_y;
        extern float gyro_z;

        extern float orientation_x;
        extern float orientation_y;
        extern float orientation_z;

        extern float gravity_x;
        extern float gravity_y;
        extern float gravity_z;

    } // namespace imu
    namespace accel {
        extern enum SensorState status;
        extern bool failed_init;
        extern uint8_t failed_reads;

        extern float accel_x;
        extern float accel_y;
        extern float accel_z;

    } // namespace accel
    namespace sd {
        extern bool init;
        extern bool failed_init;

        extern int current_file;
        
    } // namespace sd
}; // namespace state

#endif // STATE_HPP