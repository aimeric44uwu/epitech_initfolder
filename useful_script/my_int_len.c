/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_int_len.c
*/

#include "../../../include/my.h"

int my_int_len(int nb)
{
    int i = 0;
    if (nb == 0)
        return -1;
    if (nb < 0) {
        nb = nb * -1;
        i++;
    }
    for (; nb > 0; i++)
        nb = nb / 10;
    return i;
}
