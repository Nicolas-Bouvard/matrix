/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header file that contains the prototypes of
** all the functions exposed by your libmy.a
*/

#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

void my_putchar(char c);

int my_error(char *str);

int my_isneg(int nb);

int my_put_nbr(int nb);

int my_put_nbr_div(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nv, int power);

int my_compute_square_root(int nb);

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

char my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str);

int my_putnbr_base(int nb, char *base);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

int my_strcmp_2(char const *str1, char const *str2, int i);

int my_strcmp(char const *str1, char const *str2);

int *my_int_calloc(int length);

int my_atoi(char *str);

char *my_itoa(int number);

void *my_calloc(int nb_elem, int type_size);

void *my_memset(void *dst, int c, int n);

char *get_next_line(int fd);

int malloc_failed(int nbr);

char *clean_str(char *str);