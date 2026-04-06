# AxisCLI

AxisCLI is a lightweight, standalone command-line interface for Windows designed to make everyday system tasks faster and more efficient.  
It provides a streamlined environment for directory navigation, file management, system monitoring, and direct access to native Windows tools — all in a single, consistent interface.
 
AxisCLI is built for speed, clarity, and simplicity, giving you essential functionality without unnecessary complexity.

---

## Overview

AxisCLI focuses on the most common terminal workflows:

- Directory navigation  
- File and folder management  
- System and hardware information  
- Process and system control  
- Network and security utilities  

All functionality is available through a unified command structure while maintaining full compatibility with native Windows tools.

---

## Design Approach

AxisCLI follows a simple principle:

Provide essential system functionality in one place without adding unnecessary complexity.

- Works as its own CLI environment  
- Allows switching to other shells at any time  
- Keeps workflows simple and predictable  

---

## Quick Start

1. Place `axiscli.exe` in any directory  
2. Run it once  
3. The application automatically adds itself to your System PATH  

After initialization, start it from anywhere: 

```bash
axiscli
```

---

## Command System

AxisCLI includes a built-in help system:

- `help` → list all available commands  
- typing a command without arguments → shows usage and options  

---

## Core Functionality

### File & Directory Operations
Navigation, listing, and file management in a structured and readable format.

### System Control
Process handling, environment access, and system-level operations.

### Hardware & Monitoring
Access to system and hardware information.

### Network & Security
Basic networking tools and system security interaction.

### Native Windows Integration
Direct access to standard Windows utilities and all executables available in System32 or your PATH.

---

## Shell Interoperability

AxisCLI allows switching to other shells without leaving the current context:

```bash
powershell
cmd
```

You can return to AxisCLI at any time.

---

## Terminal Control

- Persistent color configuration  
- Screen and interface control  

---

## Technical Requirements

- Windows 64-bit  
- Runs inside standard Windows console environments  
- No external dependencies required  

---

## Important Notes

AxisCLI modifies your System PATH during initialization to allow global access.  
No other system modifications are performed.

---

## License

All rights reserved.

This software is provided as a compiled binary for end use only.

Permission is granted to use the software for personal and commercial purposes.  
Redistribution of the software is permitted, provided that this license is included.

Resale of the software on its own is not permitted.

You may not claim this software as your own work.

This software is provided "as is", without warranty of any kind, express or implied.

In no event shall the author be liable for any claim, damages, or other liability.

Use this software at your own risk.
