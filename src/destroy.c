/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void destroy_sprite(win_t *sys)
{
	sfSprite_destroy(sys->sprite->background);
	sfSprite_destroy(sys->sprite->bar);
	sfSprite_destroy(sys->sprite->mouse);
	sfSprite_destroy(sys->sprite->HUD_warren);
	sfSprite_destroy(sys->sprite->recept);
	sfSprite_destroy(sys->sprite->pata);
	sfSprite_destroy(sys->sprite->warren);
	sfSprite_destroy(sys->sprite->warren_z);
	sfSprite_destroy(sys->sprite->warren_s);
	sfSprite_destroy(sys->sprite->warren_q);
	sfSprite_destroy(sys->sprite->woman_1);
	sfSprite_destroy(sys->sprite->woman_2);
	sfSprite_destroy(sys->sprite->life);
	sfSprite_destroy(sys->sprite->dial_start);
	sfSprite_destroy(sys->sprite->dial_info);
	sfSprite_destroy(sys->sprite->dial_pata);
	sfSprite_destroy(sys->sprite->dial_universe);
	sfSprite_destroy(sys->sprite->dial_lost);
	sfSprite_destroy(sys->sprite->bg_menu);
}

void destroy_texture(win_t *sys)
{
	sfTexture_destroy(sys->texture->background);
	sfTexture_destroy(sys->texture->bar);
	sfTexture_destroy(sys->texture->mouse);
	sfTexture_destroy(sys->texture->HUD_warren);
	sfTexture_destroy(sys->texture->recept);
	sfTexture_destroy(sys->texture->pata);
	sfTexture_destroy(sys->texture->warren);
	sfTexture_destroy(sys->texture->warren_z);
	sfTexture_destroy(sys->texture->warren_s);
	sfTexture_destroy(sys->texture->warren_q);
	sfTexture_destroy(sys->texture->woman_1);
	sfTexture_destroy(sys->texture->woman_2);
	sfTexture_destroy(sys->texture->life);
	sfTexture_destroy(sys->texture->dial_start);
	sfTexture_destroy(sys->texture->dial_info);
	sfTexture_destroy(sys->texture->dial_pata);
	sfTexture_destroy(sys->texture->dial_universe);
	sfTexture_destroy(sys->texture->dial_lost);
	sfTexture_destroy(sys->texture->bg_menu);
}

void destroy_win(win_t *sys)
{
	sfRenderWindow_close(sys->win);
	destroy_sprite(sys);
	destroy_texture(sys);
	sfMusic_destroy(sys->music);
	sfMusic_destroy(sys->music_pata);
	sfMusic_destroy(sys->music_warren);
	sfMusic_destroy(sys->music_warren_second);
	sfClock_destroy(sys->clock);
	sfRenderWindow_destroy(sys->win);
}
