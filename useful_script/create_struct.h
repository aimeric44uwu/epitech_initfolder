/*
** EPITECH PROJECT, 2022
** myhunter
** File description:
** create_struct.h
*/

#ifndef CREATE_STRUCT_H_
    #define CREATE_STRUCT_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    typedef struct WINDOWS {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
        int fps;
        int number;
        int clickplay;
        int score;
        char *name;
    } WINDOWS_VAR;
    typedef struct TIME {
        sfClock *clock;
        sfTime time;
        float seconds;
    } TIME_VAR;
    typedef struct IMG {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f position;
        sfVector2f scale;
        sfVector2f origin;
        sfColor color;
    } IMG_VAR;

    typedef struct TEXT {
        sfFont *font;
        sfText *text;
        sfVector2f position;
        sfColor color;
        char *string;
    } TEXT_VAR;

    typedef struct SOUND {
        sfMusic *music;
        int volume;
        sfBool loop;
    } SOUND_VAR;

    typedef struct GLOBAL {
        WINDOWS_VAR windows_var;
        IMG_VAR *img_var;
        TEXT_VAR *text_var;
        SOUND_VAR sound_var;
        TIME_VAR *time_var;
    } GLOBAL_VAR;

#endif
