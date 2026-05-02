/*
 * example_plugin.c - Enhanced Example Plugin for AxisCLI
 *
 * How to compile (MinGW/GCC):
 * gcc -shared -o hello.dll example_plugin.c
 *
 * How to use:
 * 1. Place the compiled hello.dll in your AxisCLI plugin directory.
 * 2. Restart AxisCLI or use 'plugin reload' to activate.
 * 3. Type 'hello' or 'hello -v' in the shell.
 */

#include <stdio.h>
#include <string.h>
#include "axis.h"

/*
 * This function is called when the user types the command
 * assigned to 'data.name' in the shell.
 * argc: Number of arguments passed to the command.
 * argv: Array of strings containing the arguments.
 */
void hello_execute(int argc, char* argv[]) {
    int verbose = 0;

    // Logic to check for the '-v' or '--verbose' flag
    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--verbose") == 0) {
            verbose = 1;
        }
    }

    // Example of conditional logic based on the flag
    if (verbose) {
        printf("[VERBOSE] AxisCLI Plugin System is active.\n");
        printf("[VERBOSE] Command: hello | Version: 1.1.0\n");
    }

    printf("Hello from an external AxisCLI plugin!\n");

    // Display arguments if provided
    if (argc > 0) {
        printf("Arguments received (%d):\n", argc);
        for (int i = 0; i < argc; i++) {
            printf("  [%d] %s\n", i, argv[i]);
        }
    } else {
        printf("No arguments provided. Try adding '-v' for verbose mode.\n");
    }
}

/*
 * Optional cleanup function.
 * Called automatically when the shell is closed or plugins are reloaded.
 * Use this to close files, free memory, or terminate threads.
 */
void hello_unload(void) {
    // printf("Plugin 'hello' is shutting down and cleaning up resources...\n");
}

/*
 * THE ENTRY POINT (Mandatory)
 * AxisCLI looks for this specific function to register the plugin.
 * We use AXIS_EXPORT to ensure the function is visible to the shell.
 */
AXIS_EXPORT AxisPluginData PluginInit() {
    // Initialize with zeros to avoid garbage values in memory
    AxisPluginData data = { 0 };

    // The name of the command as it will be typed in the shell
    data.name = "hello";

    // Description displayed in the 'plugin list' command
    data.description = "Example plugin with flag support (try 'hello -v').";

    // Metadata about the developer and version
    data.author = "myName";
    data.version = "1.0.0";

    // Link the function pointers to your code above
    data.execute = hello_execute;
    data.on_unload = hello_unload;

    return data;
}