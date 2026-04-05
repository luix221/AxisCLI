# AxisCLI

AxisCLI is a high-performance, standalone command-line interface for Windows designed for efficient directory navigation and file system visualization. It is distributed as a compiled binary and does not require any external dependencies.

---

## Quick Start & Path Integration

The shell features an automatic integration system. You only need to run the executable once to make it available globally on your system.

1. **Setup:** Place `axiscli.exe` in any folder of your choice (e.g., a dedicated tools folder).
2. **Initialize:** Run the executable once by double-clicking it.
3. **Registry:** The shell automatically adds itself to your **System PATH**.

Once initialized, you can launch AxisCLI from anywhere (CMD, PowerShell, or Win + R) simply by typing:
**axiscli**

---

## Integrated Documentation

The shell includes a built-in help system. Once the shell is running, you can access detailed usage instructions for any command by typing the command name without arguments.

* **General Help:** Type `help` to see a list of all available operations.
* **Command Syntax:** Simply type `dir`, `tree`, or `color` to see all available flags, syntax examples, and color codes.

---

## Core Functionality

### Visual File Classification & Identification
The system automatically color-codes files based on their extension. This allows for immediate visual differentiation between binaries, source code, documents, and configuration files without manual sorting.

### Universal Command Passthrough
AxisCLI acts as a powerful wrapper for your system. It natively supports all external programs and CLI tools installed on your Windows machine:
* **Full Path Compatibility:** If you have tools like `git`, `python`, `npm`, or `gcc` in your System PATH, you can execute them directly within AxisCLI just like in a standard CMD or PowerShell window.
* **Seamless Workflow:** Run your compilers, version control, or custom scripts without ever leaving the AxisCLI environment.

### Seamless Shell Interoperability
AxisCLI is designed to coexist with your existing Windows environment. If you ever need specialized features from other environments, you can switch instantly without losing your current directory context:
* **Instant Transition:** Simply type `powershell` or `cmd` to launch a sub-shell directly within the AxisCLI window.
* **Native Command Support:** Run all system tools exactly as you would in a standard terminal.
* **Non-Intrusive Design:** AxisCLI acts as a lightweight entry point that stays out of your way when you need the heavy machinery of PowerShell. Exit the sub-shell to return to AxisCLI instantly.

### Structure Navigation
The interface provides optimized tools for viewing directory contents and recursive folder hierarchies through specialized modules tailored for fast visual scanning:
* **dir:** Detailed, color-coded directory listings.
* **tree:** Recursive folder hierarchy visualization.

### Terminal Customization
Users can define a persistent visual theme. Use the integrated `color` command to set your preferred background and foreground. These settings remain locked and persistent even when the shell displays high-contrast file listings.

---

## Technical Requirements

> [!IMPORTANT]
> This application is a **Windows-native 64-bit binary**. It requires a standard Windows Console, CMD, or Terminal environment to function correctly.

---

## License and Legal

**All Rights Reserved.**

This software is provided "AS IS", without warranty of any kind, express or implied. In no event shall the author be liable for any claim, damages, or other liability, whether in an action of contract, tort, or otherwise, arising from, out of, or in connection with the software or the use or other dealings in the software.

This software is provided as a compiled binary for end-use only. No source code is included or authorized for release. Unauthorized modification, redistribution, or reverse engineering of the binary is strictly prohibited. Use at your own risk.
