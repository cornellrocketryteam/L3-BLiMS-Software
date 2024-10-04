#ifndef SD_HPP
#define SD_HPP

#include "f_util.h"
#include "ff.h"
#include "hw_config.h"

/**
 * Container for SD card-related functionality.
 */
struct SD {
    /**
     * Begins the SD card interface by mounting the SD card.
     * @return True on successful mount, false on mount failure.
     */
    bool begin();

    /**
     * Logs the current state to the SD card.
     * @return True on successful log, false on file open, write, or close failures.
     */
    bool log();

    /**
     * SD card representation.
     */
    sd_card_t *pSD;

    /**
     * Log file object representation.
     */
    FIL log_file;
};

#endif // SD_HPP