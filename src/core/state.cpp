#include "state.hpp"
#include "../pins.hpp"

#include <stdint.h>

namespace state {
    namespace flight {
        uint32_t cycle_count = 0;
        uint32_t timestamp = 0;

        int boot_count = 0;
    } // namespace flight
    namespace alt {
        enum SensorState status = OFF;
        bool failed_init = false;
        uint8_t failed_reads = 0;

        float pressure = -1;
        float altitude = -1;

        float ref_pressure = -1;
    } // namespace alt
    namespace gps {
        enum SensorState status = OFF;
        bool failed_init = false;
        uint8_t failed_reads = 0;

        bool valid = false;
        int32_t latitude = -1;
        int32_t longitude = -1;
        int32_t altitude = -1;
        uint8_t siv = -1;
    } // namespace gps
    namespace imu {
        enum SensorState status = OFF;
        bool failed_init = false;
        uint8_t failed_reads = 0;

        float accel_x = -1;
        float accel_y = -1;
        float accel_z = -1;

        float gyro_x = -1;
        float gyro_y = -1;
        float gyro_z = -1;

        float orientation_x = -1;
        float orientation_y = -1;
        float orientation_z = -1;

        float gravity_x = -1;
        float gravity_y = -1;
        float gravity_z = -1;

    } // namespace imu
    namespace accel {
        enum SensorState status = OFF;
        bool failed_init = false;
        uint8_t failed_reads = 0;

        float accel_x = -1;
        float accel_y = -1;
        float accel_z = -1;

    } // namespace accel
    namespace sd {
        bool init = false;
        bool failed_init = false;

        int current_file = 0;

    } // namespace sd
}; // namespace state