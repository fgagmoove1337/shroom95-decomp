# GMS v95 Decompilation: A Comprehensive Guide to Shroom95

![GMS v95](https://img.shields.io/badge/GMS_v95-Decompilation-brightgreen)  
[![Releases](https://img.shields.io/badge/Download_Releases-Click_here-blue)](https://github.com/fgagmoove1337/shroom95-decomp/releases)

## Table of Contents

- [Project Overview](#project-overview)
- [Building Instructions](#building-instructions)
- [Current State](#current-state)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Project Overview

The **shroom95-decomp** project focuses on decompiling the v95 client of the game. This work involves reconstructing the class memory layout based on type information. We have partially rewritten the source code by reverse engineering (REing) and analyzing inline assembly for various functions.

The project aims to provide a clearer understanding of the game's architecture and to allow further development and modification of the client.

### Features

- Decompiled code that is easier to read and modify.
- Partially handwritten source code for critical functions.
- Improved understanding of the memory layout and game structure.

## Building Instructions

To build the project, you will need the following:

1. **CMake**: A tool to manage the build process.
2. **MSVC Compiler**: The latest version of Microsoft Visual Studio Compiler.
3. **Original Game Files**: You must have the original game files to run the decompiled version.

### Steps to Build

1. Clone the repository:

   ```bash
   git clone https://github.com/fgagmoove1337/shroom95-decomp.git
   ```

2. Navigate to the project directory:

   ```bash
   cd shroom95-decomp
   ```

3. Run the `copy_client_files.py` script to copy the necessary `.wz` files and `.dll` files:

   ```bash
   python copy_client_files.py
   ```

4. Create a build directory:

   ```bash
   mkdir build
   cd build
   ```

5. Run CMake to configure the project:

   ```bash
   cmake ..
   ```

6. Build the project:

   ```bash
   cmake --build .
   ```

7. After the build completes, you can run the game.

For downloadable builds, visit the [Releases section](https://github.com/fgagmoove1337/shroom95-decomp/releases) to find precompiled binaries.

## Current State

As of now, the game successfully boots and renders graphics correctly. While there are still areas that require further work, the foundational aspects of the game are operational. Ongoing improvements aim to enhance stability and performance.

### Future Plans

- Further refine the decompiled code.
- Add more features and functionality to the game.
- Improve documentation and examples for new developers.

## Contributing

We welcome contributions to the project. If you want to help, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your changes to your fork.
5. Create a pull request to the main repository.

### Guidelines

- Ensure your code is clean and well-documented.
- Write tests for any new features.
- Follow the coding standards used in the project.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For questions or feedback, feel free to reach out:

- **GitHub**: [fgagmoove1337](https://github.com/fgagmoove1337)
- **Email**: contact@example.com

## Acknowledgments

We thank the community for their support and contributions. Special thanks to those who have shared their knowledge on reverse engineering and game development.

## Additional Resources

- [Reverse Engineering Resources](https://example.com)
- [CMake Documentation](https://cmake.org/documentation/)
- [Microsoft Visual Studio](https://visualstudio.microsoft.com/)

Feel free to explore the [Releases section](https://github.com/fgagmoove1337/shroom95-decomp/releases) for the latest builds and updates.