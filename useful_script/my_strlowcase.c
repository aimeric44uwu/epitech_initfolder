/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_strlowcase.c
*/

#include "../../../include/my.h"

char * my_strlowcase( char *str )
{
    int length;
    for (length = 0; str[length] != '\0'; ++length);
    for (int i = 0; i < length; i++ ) {
        if (str[i] >= 65 && str[i] <= 90){
                    str[i] = str[i] + 32;
        };
    }
    return str;
}
