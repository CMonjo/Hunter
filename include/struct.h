/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Struct file
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
	sfSprite *pata;
	sfSprite *warren;
	sfSprite *warren_z;
	sfSprite *warren_s;
	sfSprite *warren_q;
	sfSprite *woman_1;
	sfSprite *woman_2;
	sfSprite *life;
	sfSprite *dial_start;
	sfSprite *dial_info;
	sfSprite *dial_pata;
	sfSprite *dial_universe;
	sfSprite *dial_lost;
	sfSprite *bg_menu;
} sprite_t;

typedef struct texture_s {
	sfTexture *background;
	sfTexture *bar;
	sfTexture *mouse;
	sfTexture *HUD_warren;
	sfTexture *recept;
	sfTexture *pata;
	sfTexture *warren;
	sfTexture *warren_z;
	sfTexture *warren_s;
	sfTexture *warren_q;
	sfTexture *woman_1;
	sfTexture *woman_2;
	sfTexture *life;
	sfTexture *dial_start;
	sfTexture *dial_info;
	sfTexture *dial_pata;
	sfTexture *dial_universe;
	sfTexture *dial_lost;
	sfTexture *bg_menu;
}texture_t;

typedef struct rect_s {
	sfIntRect HUD_warren;
	sfIntRect pata;
	sfIntRect warren;
	sfIntRect warren_z;
	sfIntRect warren_s;
	sfIntRect warren_q;
	sfIntRect woman_1;
	sfIntRect woman_2;
	sfIntRect life;
	int max_pata;
	int max_warren;
	int max_woman_1;
	int max_woman_2;
	int max_warren_z;
	int max_warren_s;
	int max_warren_q;
	int max_HUD_warren;
} rect_t;

typedef struct position_s {
	sfVector2f bar;
	sfVector2f score;
	sfVector2f dialogue_warren_1;
	sfVector2f mouse;
	sfVector2f HUD_warren;
	sfVector2f recept;
	sfVector2f pata;
	sfVector2f warren;
	sfVector2f warren_z;
	sfVector2f warren_s;
	sfVector2f warren_q;
	sfVector2f woman_1;
	sfVector2f woman_2;
	sfVector2f life;
	sfVector2f dial_start;
	sfVector2f dial_info;
	sfVector2f dial_pata;
	sfVector2f dial_universe;
	sfVector2f dial_lost;
} position_t;

typedef struct win_s {
	sfRenderWindow* win;
	sfEvent event;
	sfClock *clock;
	sfTime time;
	float seconds;
	sfMusic *music;
	sfMusic *music_warren;
	sfMusic *music_pata;
	sfMusic *music_warren_second;
	int key;
	int score;
	sprite_t *sprite;
	texture_t *texture;
	position_t *pos;
	rect_t *rect;
} win_t;

#endif
