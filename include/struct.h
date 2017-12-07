/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct declaration file
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "hunter.h"

typedef struct sprite_s {
	sfSprite *background;
	sfSprite *bar;
	sfSprite *mouse;
	sfSprite *HUD_warren;
	sfSprite *recept;
	sfSprite *pause_off;
	sfSprite *pause_on;
	sfSprite *pata;
	sfSprite *warren;
	sfSprite *woman_1;
	sfSprite *woman_2;
	sfSprite *sprite_life;
	//sfSprite *background_menu;
	//sfSprite *dialogue_warren_1;

}sprite_t;

typedef struct texture_s {
	sfTexture *background;
	sfTexture *bar;
	sfTexture *mouse;
	sfTexture *HUD_warren;
	sfTexture *recept;
	sfTexture *pata;
	sfTexture *warren;
	sfTexture *woman_1;
	sfTexture *woman_2;
	sfTexture *pause_off;
	sfTexture *pause_on;
	sfTexture *life;
	//sfTexture *background_menu;
	//sfTexture *dialogue_warren_1;
}texture_t;

typedef struct rect_s {
	sfIntRect HUD_warren;
	sfIntRect pata;
	sfIntRect warren;
	sfIntRect woman_1;
	sfIntRect woman_2;
	int max_pata;
	int max_warren;
	int max_woman_1;
	int max_woman_2;
}rect_t;

typedef struct position_s {
	sfVector2f bar;
	sfVector2f score;
	sfVector2f dialogue_warren_1;
	sfVector2f mouse;
	sfVector2f HUD_warren;
	sfVector2f recept;
	sfVector2f pause;
	sfVector2f pata;
	sfVector2f warren;
	sfVector2f woman_1;
	sfVector2f woman_2;
	sfVector2f life;
}position_t;

typedef struct win_s {
	sfRenderWindow* win;
	sfEvent event;
	sfClock *clock;
	sfTime time;
	float seconds;
	sfMusic *music;
	sprite_t *sprite;
	texture_t *texture;
	position_t *pos;
	rect_t *rect;
}win_t;

#endif
