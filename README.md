## debug.h: A Custom Arduino Library for Debugging

**Introduction**

The `debug.h` library simplifies adding debug messages to your Arduino sketches. It provides a user-friendly `debugf` function that allows you to print various data types to the serial monitor, aiding in code development and troubleshooting.

**Features**

* **Conditional Compilation:** Enable or disable debug mode by defining the `DEBUG` flag in your sketch. When disabled, `debugf` calls are omitted, reducing code size for production use.
* **Serial Communication:** Initialize debug mode with the desired baud rate using `debug_init(baud_rate)`. The library currently supports commonly used baud rates.
* **Rich Data Type Support:** Print various data types including integers, unsigned integers, characters, strings, and floating-point numbers. The library uses standard Arduino specifiers for formatting output.
* **Clear and Informative Output:** `debugf` generates well-formatted messages that include data type labels for easy interpretation.

**Installation**

1. Download the `debug.h` header file.
2. Place the file in a directory accessible by your Arduino IDE. A common location is the `libraries` folder within your Arduino sketchbook.

**Usage**

1. Include the library header in your sketch:

   ```c++
   #include <debug.h>
   ```

2. Define `DEBUG` in your sketch to enable debug mode: To disable, just remove it.

   ```c++
   #define DEBUG
   ```

3. Call `debug_init(baud_rate)` in your `setup()` function to initialize serial communication:

   ```c++
   void setup() {
     /*Serial.begin(115200); Or your preferred baud rate*/
     debug_init(115200);
   }
   ```

4. Use `debugf` throughout your code to print debug messages with various specifiers, similar to Arduino's `Serial.print` function:

   ```c++
   int x = 10;
   float pi = 3.14159;

   debugf("Integer value: %d\n", x);
   debugf("Floating-point value (2 decimals): %.2f\n", pi);
   ```

**Example Sketch**

See the provided code example within the `debug.h` file for a detailed demonstration of usage.

**Additional Notes**

* Refer to the Arduino documentation for a complete list of supported formatting specifiers: [https://www.arduino.cc/reference/tr/language/functions/communication/serial/print](https://www.arduino.cc/reference/tr/language/functions/communication/serial/print)

**Contributing**

We welcome contributions to improve this library. Feel free to submit pull requests on our GitHub repository (if applicable).

**License**

This library is licensed under the MIT License. See the LICENSE file for more information.
