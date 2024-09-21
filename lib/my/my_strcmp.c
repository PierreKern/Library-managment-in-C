/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
**  strseee
*/
#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
