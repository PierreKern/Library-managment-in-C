/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** decimal to hexa
*/
#include "../../include/my.h"

int my_deca_to_hexa(int nb)
{
    int mod_nb;
    char hex_digit[100];
    int i = 0;

    while (nb > 0) {
        mod_nb = nb % 16;
        nb = nb / 16;
        if (mod_nb > 9) {
            hex_digit[i] = (mod_nb - 10 + 'a');
        } else {
            hex_digit[i] = (mod_nb + '0');
        }
        i++;
    }
    while (i >= 0) {
        my_putchar(hex_digit[i - 1]);
        i--;
    }
    return 1;
}

int my_deca_to_octa(int nb)
{
    int mod_nb;
    char octal_digit[100];
    int i = 0;

    while (nb > 0) {
        mod_nb = nb % 8;
        nb = nb / 8;
        octal_digit[i] = (mod_nb + '0');
        i++;
    }
    while (i >= 0) {
        my_putchar(octal_digit[i]);
        i--;
    }
    return 1;
}

int my_to_hexa(int nb)
{
    int mod_nb;
    char hex_digit[100];
    int i = 0;

    while (nb > 0) {
        mod_nb = nb % 16;
        nb = nb / 16;
        if (mod_nb > 9) {
            hex_digit[i] = (mod_nb - 10 + 'A');
        } else {
            hex_digit[i] = (mod_nb + '0');
        }
        i++;
    }
    while (i >= 0) {
        my_putchar(hex_digit[i - 1]);
        i--;
    }
    return 1;
}

int hexaflag(va_list arg)
{
    my_deca_to_hexa(va_arg(arg, int));
}

int octaflag(va_list arg)
{
    my_deca_to_octa(va_arg(arg, int));
}

/*int my_deca_to_base(int nb, int base)
{
    int mod_nb;
    char hex_digit[100];
    int i = 0;

    while (nb > 0) {
        mod_nb = nb % base;
        nb = nb / base;
        if (mod_nb > 9) {
            hex_digit[i] = (mod_nb - 10 + 'A');
        } else {
            hex_digit[i] = (mod_nb + '0');
        }
        i++;
    }
    while (i >= 0) {
        my_putchar(hex_digit[i]);
        i--;
    }
    return 1;
}
*/
