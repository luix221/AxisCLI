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
3. The application automatically adds itself to your User PATH  

After initialization, start it from anywhere: 

```bash
axiscli
```
### Direct Command Execution (Passthrough)
AxisCLI supports direct command execution from any other terminal (CMD, PowerShell, etc.). This allows you to use AxisCLI's specialized tools without entering the interactive shell:
```bash
axiscli hwinfo
axiscli getip
axiscli <any-command-or-plugin>
```

---

## Command System

AxisCLI includes a built-in help system:

- `help` → list all available commands
- `help -f` or `help --fun` → show secret and entertainment commands
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

## Script & Execution Handling

AxisCLI provides a flexible way to run Windows scripts (`.bat`, `.ps1`, `.vbs`). You can control whether a script runs inside your current session or in a new environment.

### Execution Modes

| Mode | Command | Execution Context | Use Case |
| :--- | :--- | :--- | :--- |
| **Inline** | `myscript.bat` | Runs directly inside AxisCLI | Quick tasks, seeing output in the same window. |
| **Isolated** | `run myscript.bat` | Opens a new native CMD/PS window | Long-running scripts or tools that need a clean environment. |

* **Batch Files (`.bat`):** Executed via `cmd /c` when called inline.
* **PowerShell (`.ps1`):** Automatically handled via `powershell -ExecutionPolicy Bypass`.
* **VBScript (`.vbs`):** Executed via `cscript`.

## Shell Interoperability

AxisCLI allows switching to other shells without leaving the current context:

```bash
powershell
cmd
```

You can return to AxisCLI at any time.

---

## Plugin System (v2.0.0+)

AxisCLI features a native C/C++ plugin architecture, allowing you to add custom commands via DLLs.

* **Custom Directory:** Use `plugin setdir <path>` to define where your plugins are stored.
* **Hot Reloading:** Add or update DLLs and use `plugin reload` to refresh the command list without restarting.
* **Discovery:** Use `plugin list` to view all currently loaded external commands.
* **Capacity:** Supports up to 64 concurrent plugins. This ensures system stability and high performance even with multiple extensions loaded.
  
For developers, a dedicated **SDK** (including `axis.h` and examples) is available in the project repository to help you build your own extensions.

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

AxisCLI modifies your User PATH during initialization to allow global access.  
No other system modifications are performed.

---

## License
#### AxisCLI License – Copyright (c) 2026 luix221

All rights reserved.

This software is provided as a compiled binary for end use only.

Permission is granted to use the software for personal and commercial purposes.  
Redistribution of the software is permitted, provided that this license is included.

Resale of the software on its own is not permitted.

You may not claim this software as your own work.

This software is provided "as is", without warranty of any kind, express or implied.

In no event shall the author be liable for any claim, damages, or other liability.

Use this software at your own risk.
