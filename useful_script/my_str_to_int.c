/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_str_to_int.c
*/

#include "../../../include/my.h"

int my_str_to_int(char *str)
{
    int resultat = 0;
    for (int i = 0; str[i] != '\0'; ++i)
        resultat = resultat * 10 + str[i] - '0';
    return resultat;
}
