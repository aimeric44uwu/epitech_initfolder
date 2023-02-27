/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** my_test.c
*/

#include "../include/my.h"

int main(int argc, char *argv[])
{
    my_putstr("does this appear ?\n");

    my_putstr("here is 42 : \n");

    my_put_nbr(42);

    my_putstr("\nhere is a char : \n");

    my_putchar('a');

    my_putstr("\nhere is a the len of 'hello world' : \n");

    my_put_nbr(my_strlen("hello world"));

    my_putchar('\n');

    testp2();
}

void testp2(void)
{
    int myfile = my_open_file("test_text.txt");

    char buffer[259];
    int maxsize = 258;
    int result = read(myfile, buffer, maxsize);
    buffer[result] = '\0';
    close(myfile);

    if (result == - 1) {
        my_putstr("Can't find file\n");
    }else{
        my_putstr(buffer);
    }
    my_putchar('\n');
}
