/*
 * axis.h - Plugin SDK for AxisCLI
 * (c) 2026 luix221. All rights reserved.
 *
 * --- PLUGIN DEVELOPER GUIDELINES ---
 * 1. ENTRY POINT:
 *    Every plugin must export a function: AxisPluginData PluginInit(void);
 *
 * 2. C++ COMPATIBILITY:
 *    If you use C++, you MUST wrap your PluginInit in an 'extern "C"' block
 *    to prevent name mangling: extern "C" { __declspec(dllexport) AxisPluginData PluginInit() { ... } }
 *
 * 3. MEMORY MANAGEMENT:
 *    Plugins are responsible for their own memory. Use the 'on_unload'
 *    callback to free any resources (files, sockets, heap memory) before
 *    the DLL is detached.
 *
 * 4. NAMING:
 *    The 'name' field in AxisPluginData defines the command used in the shell.
 *    If the name conflicts with a built-in command, the built-in command takes priority.
 *
 * 5. LIMITATIONS:
 *    AxisCLI supports a maximum of 64 concurrently loaded plugins. 
 *    If this limit is reached, additional DLLs in the plugin directory 
 *    will be ignored until space is cleared or the session restarts.
 */

#ifndef AXIS_H
#define AXIS_H

 // Helper macro for easy exporting
#ifdef __cplusplus
    #define AXIS_EXPORT extern "C" __declspec(dllexport)
#else
    #define AXIS_EXPORT __declspec(dllexport)
#endif

#include <windows.h>

typedef struct {
    const char* name;          // The command string (e.g., "mycmd")
    const char* description;   // Short description shown in 'plugin list'
    const char* author;        // Author name
    const char* version;       // Plugin version (e.g., "1.0.0")

    // Callback: Called when the user types the command
    void (*execute)(int argc, char* argv[]);

    // Callback: Called before the DLL is unloaded (cleanup)
    void (*on_unload)(void);

    HMODULE hModule;           // Reserved for internal use
} AxisPluginData;

// Function pointer type for the required 'PluginInit' export
typedef AxisPluginData(*PluginInitFunc)(void);

#endif
