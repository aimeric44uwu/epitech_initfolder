/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_strcpy.c
*/

#include "../../../include/my.h"

int my_strlen( char *str )
{
    int size = 0;
    while (*str) {
        size++;
        *str++;
    }
    return ( size );
}

int my_arrlen( char ** str )
{
    int size = 0;
    while ( *str != NULL ) {
        size++;
        *str++;
    }
    return ( size );
}
