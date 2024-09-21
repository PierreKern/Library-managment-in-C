/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** task01
*/
#include "../../include/my.h"

int my_strdup(char const *src)
{
    int i = 0;
    char *str = malloc((sizeof(char) * my_strlen(src)) + 1);

    while (i < my_strlen(src)) {
        str[i] = src[i];
        i++;
    }
    str[my_strlen(src)] = '\0';
    return (str);
}
