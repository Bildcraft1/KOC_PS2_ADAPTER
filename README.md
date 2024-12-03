# KOC_PS2_ADAPTER

> ⚠ WARNING - This project is still in WIP. The keys part works but the Turntable for now its not implemented in the code.

## Overview

This project is an adapter for the Beatmania IIDX Konami Official Controller PS2 for PC using an Arduino R4 Minima.

## Features

- **Compatibility**: Works with the Beatmania IIDX Konami Official Controller PS2.
- **Arduino R4 Minima/WiFi**: Utilizes the Arduino R4 Minima/WiFi for easy connectivity and control.
- **Responsive Controls**: The Arduino R4 Minima runs at a 1000Hz polling rate.

## Requirements

- Arduino R4 Minima/WiFi
- Beatmania IIDX Konami Official Controller PS2

## Installation

1. **Set up PlatformIO**:

2. **Connect the Hardware**:
    This part is a bit more complicated and i'm going to list here the pinout of the Turntable Port and the Keys Port
    so you can figure out yourself how you want to connect everything.
    
    This is because maybe you want to leave the feature where you can swap the sides or you want to retain the PS2 connection

3. **Upload the Code**:
    - Upload the sketch to the Arduino.

4. **Test the Adapter**:
    - Once the code is uploaded, test the controller with your PC to ensure everything is working correctly.

## Usage

- Connect the Beatmania IIDX Konami Official Controller PS2 to the Arduino adapter.
- Plug the Arduino into your PC.
- The default config maps the buttons to `'A', 'B', 'C', 'D', 'E', 'F', 'G'
- The turnable is mapped to Z for + and X for -

## Troubleshooting

- **Controller not recognized**: Ensure all connections are secure and the correct drivers are installed.
- **Laggy controls**: Check the USB connection and try using a different USB port.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request with your improvements.

## License

This project is licensed under the GPLv3 License. See the [LICENSE](LICENSE) file for details.

## Contact

For any questions or support, please open an issue on the GitHub repository.
