/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_strcapitalize.c
*/

#include "../../../include/my.h"

char * my_strcapitalize( char * str )
{
    int length;
    for (length = 0; str[length] != '\0'; ++length);
    for (int i = 0; i < length; i++ ) {
        if (str[i] >= 65 && str[i] <= 90){
                    str[i] = str[i] + 32;
        };
    }
    for (int i = 0; i < length; i++ ) {
        if ( str [ i + 1 ] >= 97 && str [ i + 1 ] <= 122 &&
        str[i] == 32 || str[i] == 45 || str[i] == 43){
            str [ i + 1 ] = str [ i + 1 ] - 32;
        };
    }
    str[0] = str[0] - 32;
    return str;
}
