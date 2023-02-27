/*
** EPITECH PROJECT, 2022
** myproject
** File description:
** fs_open_file.c
*/

#include "../../../include/my.h"

int my_open_file( char const *filepath )
{
    int file = open(filepath, O_RDONLY);
    if (file == -1){
        write(2, "Error: cannot open file.\n", 26);
        return -1;
    }
    return file;
}
