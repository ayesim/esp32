
#pragma once

#include <stdint.h>

#include "driver/gpio.h"
#include "misc/button.h"
#include "misc/input_pin.h"
#include "misc/output_pin.h"

namespace io {

// Active high.
extern OutputPin LED1;
extern OutputPin LED2;

// Active low.
extern Button BUTTON1;

// Read hardware configuration.
// Returns:
// 0 - CFG1, CFG2, not installed.
// 1 - Only CFG1 installed.
// 2 - Only CFG2 installed.
// 3 - Both CXG1, CFG2 installed.
extern uint8_t read_hardware_config();

}  // namespace io