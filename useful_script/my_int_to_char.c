/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_int_to_char.c
*/

#include "../../../include/my.h"

char *reverse_string(char *str)
{
    int len = my_strlen(str);
    char* result = malloc(sizeof(int) * (len + 1));
    for (int i = 0; i < len; i++) {
        result[i] = str[len - i - 1];
    }
    result[len] = '\0';
    return result;
}

char *my_int_to_char(char *pretext, int i)
{
    int j = 0, number = i;
    char *result = malloc(sizeof(char) * (my_strlen(pretext) + 200));
    for (int k = 0; k < my_strlen(pretext); k++) {
        result[j] = pretext[k];
        j++;
    }
    while (number > 0) {
        int lastDigit = number % 10;
        number = number / 10;
        result[j] = lastDigit + '0';
        j++;
    }
    int len = j + my_strlen(pretext), k = my_strlen(pretext);
    for (k; k < len / 2 ; k++) {
        char temp = result[k];
        result[k] = result[len - k - 1];
        result[len - k - 1] = temp;
    }
    result[j] = '\0';
    return result;
}
