/*
** EPITECH PROJECT, 2023
** uxu
** File description:
** oxo
*/
#include "../../include/my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i ++;
    }
}

int sflag(va_list arg)
{
    my_putstr(va_arg(arg, int));
}
