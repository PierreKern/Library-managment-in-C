/*
** EPITECH PROJECT, 2023
** my
** File description:
** putchar
*/

#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int cflag(va_list arg)
{
    my_putchar(va_arg(arg, int));
}
