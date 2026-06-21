#pragma once

#define NO_MUSIC_MODE

#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// OLED display configuration - Force 128x64 and correct rotation
#define I2C1_SDA_PIN D1  // Standard I2C SDA pin for Pro Micro
#define I2C1_SCL_PIN D0  // Standard I2C SCL pin for Pro Micro
#define OLED_DISPLAY_128X64

#define DEBOUNCE 5          // Standard debounce timing (ms) - good balance of speed/stability
#define USB_POLLING_INTERVAL_MS 1  // 1000Hz USB polling for minimal input latency
#define QUICK_TAP_TERM 0    // Disable tap-hold quick tap for faster layer switching

// WPM tracking configuration
// #define WPM_LAUNCH_CONTROL  // Enable WPM launch control features
// #define WPM_ALLOW_COUNT_REGRESSION  // Allow WPM to decrease naturally

#define ENCODER_RESOLUTION 4

// Last key pressed tracking for OLED display
#define LAST_KEY_BUFFER_SIZE 1  // Store last key presses for display

#define WPM_PERSONAL_BEST_ENABLE

#define MOUSEKEY_INITIAL_SPEED 1
