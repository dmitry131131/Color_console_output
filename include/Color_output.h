/**
 * @file
 * @brief Color console output functions
*/
#ifndef COLOR_CONSOLE
#define COLOR_CONSOLE

#include <stdio.h>
#include <stdarg.h>


enum consoleColor{
    COLOR_BLACK   = 0,
    COLOR_RED     = 1,
    COLOR_GREEN   = 2,
    COLOR_YELLOW  = 3,
    COLOR_BLUE    = 4,
    COLOR_PURPLE  = 5,
    COLOR_CYAN    = 6,
    COLOR_WHITE   = 7,
    COLOR_DEFAULT = 8
};

enum consoleStyle{
    STYLE_NORMAL     = 0,
    STYLE_BOLD       = 1,
    STYLE_UNDERLINED = 4,
    STYLE_BLINKING   = 5,
    STYLE_INVERT_C   = 7,
    STYLE_INVISIBLE  = 8
};

void color_printf(enum consoleColor color, enum consoleStyle style, const char* text, ...);

void color_fprintf(enum consoleColor color, enum consoleStyle style, FILE* stream, const char* text, ...);

void set_color(enum consoleColor color, enum consoleStyle style);

#endif