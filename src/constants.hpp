#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#ifdef VERBOSE
#define logf(...) printf(__VA_ARGS__)
#else
#define logf(...)
#endif

#include <cstdint>

/**
 * Container for flight-related constants.
 */
namespace constants {
    constexpr uint8_t cycle_time = 50;              // ms
    constexpr uint8_t max_failed_reads = 10;
}; // namespace constants

#endif // CONSTANTS_HPP