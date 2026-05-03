# AxisCLI

AxisCLI is a lightweight, standalone Windows command-line interface built with the WinAPI.  
It focuses on speed, clarity, and simplicity — giving you essential system tools without unnecessary complexity.

---

##  Download

->  **Latest Release:**  
https://github.com/luix221/AxisCLI/releases

->  **GitHub Repository:**  
https://github.com/luix221/AxisCLI/

---

##  Overview

AxisCLI provides a streamlined environment for the most common terminal workflows:

- Directory navigation  
- File and folder management  
- System and hardware information  
- Process and system control  
- Network and security utilities  

All commands follow a unified structure and remain fully compatible with native Windows tools.

---

##  Quick Start

1. Place `axiscli.exe` anywhere  
2. Run it once  
3. AxisCLI automatically adds itself to your **User PATH**  
4. Start it from anywhere:

```
axiscli
```

### Direct Command Execution (Passthrough)

Use AxisCLI tools from CMD, PowerShell, or any other shell:

```
axiscli hwinfo
axiscli getip
axiscli <any-command-or-plugin>
```

---

##  Core Functionality

### **File & Directory Operations**
Clean, readable navigation and file management.

### **System Control**
Process handling, environment access, and system-level operations.

### **Hardware & Monitoring**
Retrieve hardware and system information using native WinAPI calls.

### **Network & Security**
Tools for IP, WiFi, ports, and basic security interaction.

### **Native Windows Integration**
Direct access to System32 utilities and all executables in your PATH.

---

##  Script Execution

AxisCLI supports `.bat`, `.ps1`, and `.vbs` scripts.

| Mode | Command | Context | Use Case |
|------|---------|---------|----------|
| **Inline** | `myscript.bat` | Runs inside AxisCLI | Quick tasks, same window |
| **Isolated** | `run myscript.bat` | Opens new CMD/PS window | Long-running or clean environment |

- `.bat` → executed via `cmd /c`  
- `.ps1` → executed via PowerShell (ExecutionPolicy Bypass)  
- `.vbs` → executed via `cscript`  

---

##  Shell Interoperability

Switch to other shells at any time:

```
powershell
cmd
```

Return to AxisCLI whenever you want.

---

##  Plugin System (v2.0.0+)

AxisCLI includes a native **C/C++ plugin architecture**.

### Features

- Up to **64 plugins**  
- Hot reload (`plugin reload`)  
- Custom plugin directory (`plugin setdir <path>`)  
- Plugin discovery (`plugin list`)  
- Simple API (`axis.h`)  
- Example plugin included  

### Plugin Installation

1. Create a plugin directory (e.g., `C:\AxisPlugins`)  
2. Set it:

```
plugin setdir C:\AxisPlugins
```

3. Place your `.dll` plugin inside  
4. Reload:

```
plugin reload
```

### Plugin Usage

- List plugins: `plugin list`  
- Run plugin: type its command name  
- Pass arguments: `mycmd --flag value`  

### Troubleshooting

- Ensure DLL is **x64**  
- Built-in commands override plugin names  
- Change directory anytime with `plugin setdir`  

---

##  Built‑In Help System

AxisCLI includes a complete help interface:

```
help
help -f
<command>
```

- `help` → all commands  
- `help -f` → fun/secret commands  
- `<command>` → usage & options  

---

##  Design Philosophy

AxisCLI follows one core principle:

> **Provide essential system functionality in one place without unnecessary complexity.**

- Lightweight  
- Predictable  
- Fast  
- Native  
- No dependencies  

---

##  Technical Requirements

- Windows 64‑bit  
- Runs in standard Windows console  
- No external dependencies  

---

##  License

AxisCLI License © 2026 luix221

- You may use, copy, modify, merge, publish, distribute, and/or sublicense the software  
- You may sell products **that include** AxisCLI  
- You may **not** sell AxisCLI as a standalone product  
- You may **not** claim you created AxisCLI  

The software is provided **as‑is**, without warranty.

---

##  Contributing

AxisCLI welcomes plugin developers and contributors.  
Check the repository for:

- `axis.h` (Plugin SDK)  
- `example_plugin.c`  
- Plugin Guide  
- Documentation  

---

##  What is AxisCLI?

AxisCLI is a fast, minimalistic Windows shell built directly on the WinAPI.  
It aims to provide a clean, powerful, and modern command-line experience — without the complexity of PowerShell or the limitations of CMD.

Perfect for:

- Sysadmins  
- Developers  
- Power users  
- Anyone who wants a fast, native Windows terminal  
