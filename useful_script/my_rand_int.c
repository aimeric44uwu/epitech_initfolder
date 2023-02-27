/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** rand_int.c
*/

#include "../../../include/my.h"

int my_rand_int(int a, int b)
{
    int random_data = open("/dev/urandom", O_RDONLY);
    int random_num;
    read(random_data, &random_num, sizeof(int));
    close(random_data);
    return random_num % (b - a + 1) + a;
}
