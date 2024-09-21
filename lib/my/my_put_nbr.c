/*
** EPITECH PROJECT, 2023
** fzofh
** File description:
** zefhz
*/

#include "../../include/my.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
}

int nbrflags(va_list arg)
{
    my_put_nbr(va_arg(arg, int));
}
