/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_putstr.c
*/

#include "../../../include/my.h"

void my_putstr(void *arg)
{
    char *str = (char *) arg;
    for (char character = *str; character != '\0'; character = *++str) {
        write(1, &character, 1);
    }
}
