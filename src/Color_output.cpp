/**
 * @file
 * @brief Color console output functions source
*/
#include "Color_output.h"

void color_printf(enum consoleColor color, enum consoleStyle style, const char* text, ...)
{
    va_list arguments;
    va_start(arguments, text);

    printf("\33[%d;3%dm", style, color);
    vprintf(text, arguments);
    printf("\33[0;39m");
}

void color_fprintf(FILE* stream, enum consoleColor color, enum consoleStyle style, const char* text, ...)
{
    va_list arguments;
    va_start(arguments, text);

    fprintf(stream, "\33[%d;3%dm", style, color);
    vfprintf(stream, text, arguments);
    fprintf(stream, "\33[0;39m");
}

void set_color(FILE* stream, enum consoleColor color, enum consoleStyle style)
{
    fprintf(stream, "\33[%d;3%dm", style, color);
}

void color_putc(FILE* stream, enum consoleColor color, enum consoleStyle style, char ch)
{
    fprintf(stream, "\33[%d;3%dm", style, color);
    putc(ch, stream);
    fprintf(stream, "\33[0;39m");
}