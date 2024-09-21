/*
** EPITECH PROJECT, 2023
** printable
** File description:
** printable
*/

int my_isprintable(char c)
{
    if (c >= 20 && c <= 126)
        return 1;
    return 0;
}
