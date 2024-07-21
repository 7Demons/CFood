#include <stdio.h>
#include "../include/file.h"

// TODO: configure CMAKE with this project or something.
// if you are to add another .c file add it to tasks.json for now

int main() {
    // start up routines
    // load recipes
    DirectoryTable table = createDirectoryTable();

    LoadDirectoryContents(&table, "C:\\Users\\Admin\\source\\repos\\CFood\\data");
    printDirectoryTable(&table);

        // set up states

    // main loop
        // input handler
        // update logic
        // output rendering
        // exit?

    // clean up
    return 0;

}

/*
S32 main() {
    HANDLE hConsole;
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    int columns, rows;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (GetConsoleScreenBufferInfo(hConsole, &consoleInfo)) {
        columns = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
        rows = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;

        printf("Console size: %d columns, %d rows\n", columns, rows);
    } else {
        printf("Unable to retrieve console size.\n");
    }


    DirectoryTable table = createDirectoryTable();

    LoadDirectoryContents(&table, "C:\\Users\\Admin\\source\\repos\\CFood\\data");
    printDirectoryTable(&table);
}
*/