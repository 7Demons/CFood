#include "../include/file.h"
#include <string.h>


DirectoryTable createDirectoryTable() {
    size_t DEFAULT_SIZE = 16;
    DirectoryTable table;
    table.fileNames = (C8 **) calloc(DEFAULT_SIZE, sizeof(char*));

    if (!table.fileNames) {
        printf("Could not allocate directory table");
        return table;
    }
    table.capacity = DEFAULT_SIZE; 
    table.elements = 0;

    return table;
}

U0 pushDirectoryTable(DirectoryTable* table, C8* fileName) {
    if (!table) {
        printf("Push Directory Table null pointer dereference.");
        return;
    }
    size_t len = strlen(fileName) + 1;
    C8* fn = (C8*) malloc(sizeof(C8) * len);
    strcpy(fn, fileName);

    // resize the array;
    if (table-> elements == table->capacity) {
        size_t newCapacity = table->capacity * 2;
        table->fileNames = realloc(table->fileNames, newCapacity * sizeof(C8 *));

        if (!table->fileNames) {
            printf("Error resizing array!");
            return;
        }

        table->capacity = newCapacity;
    }

    table->fileNames[table->elements] = fn;
    table->elements ++;
    return;
}

U0 printDirectoryTable(DirectoryTable* table) {
    printf(BOLD GREEN "Recipes: \n" RESET);
    for (int i = 0; i < table->elements; i++) {
        printf("\t%s \n", table->fileNames[i]);
    }
}


/*
adapted from
https://stackoverflow.com/questions/2314542/listing-directory-contents-using-c-and-windows
*/
bool LoadDirectoryContents(DirectoryTable* table, const char *sDir)
{
    WIN32_FIND_DATA fdFile;
    HANDLE hFind = NULL;

    C8 sPath[2048];
    sprintf(sPath, "%s\\*.*", sDir);

    
    hFind = FindFirstFile(sPath, &fdFile);
    
    if (hFind == INVALID_HANDLE_VALUE)
    {
        printf("Path not found: %s\n", sDir);
        return false;
    }

    do
    {
        //Find first file will always return "." and ".." as the first two dir.
        if(strcmp(fdFile.cFileName, ".") != 0
                && strcmp(fdFile.cFileName, "..") != 0)
        {
            //Build up our file path using the passed in
            //  [sDir] and the file/foldername we just found:
            sprintf(sPath, "%s\\%s", sDir, fdFile.cFileName);

            //Is the entity a File or Folder?
            if(fdFile.dwFileAttributes &FILE_ATTRIBUTE_DIRECTORY)
            {
                // printf("Directory: %s\n", sPath);
                // ListDirectoryContents(sPath); //Recursion, I love it!

                // pass for now... 
            }
            else{
                //printf("File: %s\n", sPath);
                pushDirectoryTable(table, sPath);
            }
        }
    }
    while(FindNextFile(hFind, &fdFile)); //Find the next file.

    FindClose(hFind); //Always, Always, clean things up!

    return true;
}



