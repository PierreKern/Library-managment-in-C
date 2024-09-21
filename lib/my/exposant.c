/*
** EPITECH PROJECT, 2023
** exposant
** File description:
** scientifique
*/

#include "../../include/my.h"

void freq(double *x)
{
    int frequence = (*x * 1000000);

    my_put_nbr(frequence / 100);
    frequence = (frequence % 100);
    my_put_nbr(frequence);
}

void afficherresultat(int i, int j, double x)
{
    my_put_nbr((int)x);
    my_putchar('.');
    x = x - (int)x;
    freq(&x);
    my_putchar('e');
    if (j >= 1) {
        my_putchar('-');
    } else {
        my_putchar('+');
    }
    if (i < 10) {
        my_putchar('0');
    }
    my_put_nbr(i);
}

void exposant(double x)
{
    int i = 0;
    int j = 0;

    if (x < 0) {
        x = - x;
        my_putchar('-');
    }
    for (i; (int)x == 0; i++){
        x = x * 10;
        j++;
    }
    for (i; x >= 10; i++)
        x = x / 10;
    afficherresultat(i, j, x);
}

void afficher_resultat(int i, int j, double x)
{
    my_put_nbr((int)x);
    my_putchar('.');
    x = x - (int)x;
    freq(&x);
    my_putchar('E');
    if (j >= 1) {
        my_putchar('-');
    } else {
        my_putchar('+');
    }
    if (i < 10) {
        my_putchar('0');
    }
    my_put_nbr(i);
}

void e_xposant(double x)
{
    int i = 0;
    int j = 0;

    if (x < 0) {
        x = - x;
        my_putchar('-');
    }
    for (i; (int)x == 0; i++){
        x = x * 10;
        j++;
    }
    for (i; x >= 10; i++)
        x = x / 10;
    afficher_resultat(i, j, x);
}
