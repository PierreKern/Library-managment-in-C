/*
** EPITECH PROJECT, 2023
** nbr
** File description:
** absolute
*/

#include "../../include/my.h"

void my_put_nbr_abs(unsigned int nb)
{
    if (nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb >= 10) {
        my_put_nbr_abs(nb / 10);
        my_putchar(nb % 10 + 48);
    }
}

int uflag(va_list arg)
{
    my_put_nbr_abs(va_arg(arg, int));
}

int e_flag(va_list arg)
{
    e_xposant(va_arg(arg, double));
}

int eflag(va_list arg)
{
    exposant(va_arg(arg, double));
}
