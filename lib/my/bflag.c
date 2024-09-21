/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** bonus
*/

#include "../../include/my.h"

int my_deca_to_bin(int nb)
{
    int mod_nb;
    char hex_digit[100];
    int i = 0;

    while (nb > 0) {
        mod_nb = nb % 2;
        nb = nb / 2;
        hex_digit[i] = (mod_nb + '0');
        i++;
    }
    while (i >= 0) {
        my_putchar(hex_digit[i - 1]);
        i--;
    }
    return 1;
}

int binflag(va_list arg)
{
    my_deca_to_bin(va_arg(arg, int));
}
