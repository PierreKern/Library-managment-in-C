/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.H
*/
#include <stdarg.h>
#include <dirent.h>
#include <string.h>

#pragma once
typedef struct book_s
{
    int id;
    char title[100];
    char author[100];
    struct book_s *next;
}book_t;

void ls_r(const char *path);
int my_strdup(char const *src);
void ls_base(const char *path);
void ls_a(const char *path);
int bflag(va_list arg);
int my_deca_to_bin(int nb);
int binflag(va_list arg);
void afficherresultat(int i, int j, double x);
void afficher_resultat(int i, int j, double x);
int e_flag(va_list arg);
int eflag(va_list arg);
int cflag(va_list arg);
int nbrflags(va_list arg);
int sflag(va_list arg);
int uflag(va_list arg);
int pourcent_flag(va_list arg);
int octaflag(va_list arg);
int hexaflag(va_list arg);
int my_strcmp(char const *s1, char const *s2);
void my_printf(char *format, ...);
void my_switch(char *traverse, va_list arg, int *l);
void freq(double *x);
void exposant(double x);
void e_xposant(double x);
void exposant_switch(char *traverse, va_list arg, int *l);
int my_deca_to_hexa(int nb);
int my_to_hexa(int nb);
int my_deca_to_octa(int nb);
void my_put_nbr_abs(unsigned int nb);
void base_switch(char *traverse, va_list arg, int *l);
void my_putchar(char c);
int my_isneg(int nb);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_swap2(char *a, char *b);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
int my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_isalpha(char c);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
typedef struct ptr {
    char *flag;
    int (*func)(va_list);
} ptr;
