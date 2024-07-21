#include "../include/file.h"
#include "../include/types.h"
#include <stdio.h>
#include <stdlib.h>

#define SLEEP_TIME_MS 40
// TODO: configure CMAKE with this project or something.
// if you are to add another .c file add it to tasks.json for now

typedef struct consoleSize_s {
    I32 rows;
    I32 cols;
} ConsoleSize;

void updateConsoleSize(ConsoleSize *consoleSize) {
    HANDLE hConsole;
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (GetConsoleScreenBufferInfo(hConsole, &consoleInfo)) {
        consoleSize->cols = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
        consoleSize->rows = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
    }
    // unable to retrieve console size, we will assume it hasnt changed.
}

int main() {
    // start up routines
    // load recipes
    DirectoryTable table = createDirectoryTable();

    LoadDirectoryContents(&table, "C:\\Users\\Robert\\source\\repos\\CFood\\data");
    printDirectoryTable(&table);

    // set up states
    ConsoleSize consoleSize;

    while (true) {
        system("cls"); // this will cause flickering. look into SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        updateConsoleSize(&consoleSize);
        printf("Size: cols: %d rows: %d\n", consoleSize.cols, consoleSize.rows);

        Sleep(SLEEP_TIME_MS);
    }
    // input handler
    // update logic
    // output rendering
    // exit?

    // clean up
    return 0;
}
