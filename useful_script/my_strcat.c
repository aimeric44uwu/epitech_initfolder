/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_strcat.c
*/

#include "../../../include/my.h"

char* my_strcat(char *dest, const char *src)
{
    if (dest == NULL || src == NULL) {
        return NULL;
    }
    char* ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}
