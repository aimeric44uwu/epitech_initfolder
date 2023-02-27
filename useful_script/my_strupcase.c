/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_strupcase.c
*/

#include "../../../include/my.h"

char * my_strupcase( char *str )
{
    int length;
    for (length = 0; str[length] != '\0'; ++length);

    for (int i = 0; i < length; i++ ) {
        if (str[i] >= 97 && str[i] <= 122){
                    str[i] = str[i] - 32;
        };
    }
    return str;
}
