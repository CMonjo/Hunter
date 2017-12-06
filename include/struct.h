/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct declaration file
*/

#ifndef STRUCT_H_
#define STRUCT_H_
typedef struct disp_s {
	sfSprite *sprite_pata;
	sfTexture *texture_pata;
	sfVector2f pos_pata;
	sfSprite *sprite_warren;
	sfTexture *texture_warren;
	sfVector2f pos_warren;
	sfSprite *sprite_woman_1;
	sfTexture *texture_woman_1;
	sfVector2f pos_woman_1;
	sfSprite *sprite_woman_2;
	sfTexture *texture_woman_2;
	sfVector2f pos_woman_2;
}disp_t;
#endif
