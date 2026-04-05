# AxisCLI

AxisCLI is a standalone command-line interface for Windows designed for efficient directory navigation and file system visualization. It is distributed as a compiled binary and does not require external dependencies.

## Quick Start & Path Integration

The shell features an automatic integration system. You only need to run the executable once to make it available globally on your system.

1. Place the `axiscli.exe` in any folder of your choice (e.g., a dedicated tools folder).
2. Run the executable once by double-clicking it.
3. The shell automatically adds itself to your System PATH.

Once initialized, you can launch AxisCLI from anywhere (CMD, PowerShell, or Win + R) simply by typing:
axiscli

## Integrated Documentation

The shell includes a built-in help system. Once the shell is running, you can access detailed usage instructions for any command by typing the command name without arguments.

* For general help: Type 'help' to see a list of available operations.
* For command-specific usage: Simply type 'dir', 'tree', or 'color' to see all available flags, syntax examples, and color codes.

## Core Functionality

### Visual File Classification
The system automatically color-codes files based on their extension. This allows for immediate visual identification of binaries, source code, documents, and configuration files without manual sorting.

### Terminal Customization
Users can define a persistent visual theme. Use the integrated 'color' command to set your preferred background and foreground. These settings remain locked and persistent even when the shell displays high-contrast file listings.

### Structure Navigation
The interface provides optimized tools for viewing directory contents and recursive folder hierarchies through the specialized 'dir' and 'tree' modules, tailored for fast visual scanning.

## Technical Requirements

> [!IMPORTANT]
> This application is a Windows-native 64-bit binary. It requires a standard Windows Console, CMD, or Terminal environment to function correctly.

## License and Legal

All Rights Reserved.

This software is provided "AS IS", without warranty of any kind, express or implied. In no event shall the author be liable for any claim, damages, or other liability, whether in an action of contract, tort, or otherwise, arising from, out of, or in connection with the software or the use or other dealings in the software.

This software is provided as a compiled binary for end-use only. No source code is included or authorized for release. Unauthorized modification, redistribution, or reverse engineering of the binary is strictly prohibited. Use at your own risk.
