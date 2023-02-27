/*
** EPITECH PROJECT, 2022
** myhunter
** File description:
** my.h
*/



#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <fcntl.h>
    #include <stdlib.h>
    
    int my_int_len(int nb);
    char *my_int_to_char(char *pretext, int i);
    int my_max(int a, int b);
    int my_min(int a, int b);
    int my_open_file(char const * filepath);
    int my_put_nbr(int nb);
    void my_putchar(int b);
    void my_putstr(void *arg);
    int my_rand_int(int a, int b);
    int my_str_to_int(char *str);
    char * my_strcapitalize(char * str);
    char* my_strcat(char* dest, const char* src);
    int my_strcmp(const char* str1, const char* str2);
    char* my_strcpy(char* dest, const char* src);
    int my_strlen ( char const * str );
    char * my_strlowcase ( char * str );
    char * my_strupcase ( char * str );
#endif
