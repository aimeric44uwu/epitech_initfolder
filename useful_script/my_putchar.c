/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_putchar.c
*/

#include "../../../include/my.h"

void my_putchar(int b)
{
    write(1, &b, 1);
}
