/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** R2 Grade C
*/
#include <stdio.h>
#include <stdarg.h>
#include "../../include/my.h"
#include <string.h>

static ptr tabfunc[] = {

    {"o", octaflag},
    {"e", eflag},
    {"E", e_flag},
    {"c", cflag},
    {"i", nbrflags},
    {"d", nbrflags},
    {"s", sflag},
    {"u", uflag},
    {"b", binflag},
    {NULL},
};

void process_format_specifier(char *traverse, int *l, va_list arg)
{
    for (int i = 0; tabfunc[i].flag != NULL; i++) {
        if (traverse[*l] == '%') {
            my_putchar('%');
            l += 2;
        }
        if (traverse[*l] == *tabfunc[i].flag) {
            tabfunc[i].func(arg);
        }
    }
}

void my_printf(char *format, ...)
{
    char *traverse = format;
    int l = 0;
    va_list arg;

    va_start(arg, format);
    while (traverse[l] != '\0') {
        for (l; traverse[l] != '%' && traverse[l] != '\0'; l++) {
            my_putchar(traverse[l]);
        }
        while (traverse[l] == '%') {
            l++;
            process_format_specifier(traverse, &l, arg);
            l++;
        }
    }
    va_end(arg);
}
