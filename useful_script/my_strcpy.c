/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_strcpy.c
*/

#include "../../../include/my.h"

char* my_strcpy(char *dest, const char *src)
{
    char* p = dest;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}
