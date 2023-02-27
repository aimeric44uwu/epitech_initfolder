/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_put_nbr.c
*/

#include "../../../include/my.h"

int my_put_nbr(int nb)
{
    int isrev = 0;
    int reversed = 0;
    if (nb >= 0) {
        isrev = 0;
    } else {
        isrev = 1;
        nb = -nb;
    };
    while (nb > 0) {
        reversed = reversed * 10 + nb % 10;
        nb = nb / 10;
    }
    if (isrev == 1) my_putchar(45);
    while (reversed != 0) {
        my_putchar( ( reversed % 10 ) + 48 );
        reversed /= 10;
    }
    return 0;
}
