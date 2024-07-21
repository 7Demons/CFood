/*
 * This is free and unencumbered software released into the public domain.
 *
 * For more information, please refer to <https://unlicense.org>
 * Taken from: https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
 */

#ifndef __ANSI__ 
#define __ANSI__ 

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

// ANSI escape codes for background colors
#define BG_BLACK   "\033[40m"   /* Background Black */
#define BG_RED     "\033[41m"   /* Background Red */
#define BG_GREEN   "\033[42m"   /* Background Green */
#define BG_YELLOW  "\033[43m"   /* Background Yellow */
#define BG_BLUE    "\033[44m"   /* Background Blue */
#define BG_MAGENTA "\033[45m"   /* Background Magenta */
#define BG_CYAN    "\033[46m"   /* Background Cyan */
#define BG_WHITE   "\033[47m"   /* Background White */

// ANSI escape codes for text attributes
#define BOLD       "\033[1m"
#define ITALIC     "\033[3m"
#define UNDERLINE  "\033[4m"

#endif __ANSI__ 