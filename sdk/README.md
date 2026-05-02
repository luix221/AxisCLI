#  AxisCLI Plugin Guide: Installation & Management

This guide explains how to extend AxisCLI v2.0.0 using native DLL plugins and how to manage them within the shell.

---

##  Step 1: Set the Plugin Directory

AxisCLI needs to know where your `.dll` files are located. You only need to configure this once, as it is stored in the Windows Registry.

1. Create a folder of your choice (e.g., `C:\AxisPlugins`).
2. Open AxisCLI.
3. Run the following command:
   **`plugin setdir C:\AxisPlugins`**

> **Note:** If your path contains spaces, wrap it in quotes:  
> `plugin setdir "C:\My Axis Plugins"`

---

##  Step 2: Installing Plugins

To add a new command to AxisCLI, simply move the corresponding DLL file into your configured directory.

1. Download or compile a plugin DLL (e.g., `hello.dll`).
2. Move the file into your Plugin Directory.
3. In AxisCLI, run the reload command to activate it without restarting:
   **`plugin reload`**

---

##  Step 3: Usage & Commands

Once loaded, plugins behave like native AxisCLI commands.

### 1. List Active Plugins
To see all currently active extensions and their registered commands, use:
**`plugin list`**
This displays the command name, description, author, and version.

### 2. Run a Plugin Command
Simply type the command name registered by the plugin. If a plugin registered the name `hello`, just type:
**`hello`**

### 3. Passing Arguments
Plugins can accept arguments just like built-in commands:
**`mycmd --flag value`**

---

##  Troubleshooting

* **Plugin not showing up:** Ensure the DLL architecture (x64) matches your AxisCLI version.
* **Command Conflicts:** If a plugin shares a name with a built-in command (like `cd` or `exit`), the built-in command will always take priority.
* **Registry Path:** You can verify or change your path anytime using `plugin setdir`.