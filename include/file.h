#ifndef __FILE_H__
#define __FILE_H__

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#include "../include/types.h"
#include "../include/ansi.h"

typedef struct DirectoryTable_s {
    C8 **fileNames;
    size_t elements;
    size_t capacity;

} DirectoryTable;

DirectoryTable createDirectoryTable();

U0 pushDirectoryTable(DirectoryTable* table, C8* fileName);

U0 printDirectoryTable(DirectoryTable* table);

bool LoadDirectoryContents(DirectoryTable* table, const char *sDir);

#endif //__FILE_H__


