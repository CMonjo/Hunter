/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void my_destroy(win_t *sys)
{
	sfSprite_destroy(sys->sprite->background);
	sfTexture_destroy(sys->texture->background);
	sfMusic_destroy(sys->music);
	sfRenderWindow_destroy(sys->win);
}

void init_sprite_dial(win_t *sys)
{
	sys->sprite->dial_end = sfSprite_create();
	sys->texture->dial_end = sfTexture_createFromFile("assets/dialogue/dial_end.png", NULL);
	sys->pos->dial_end.x = 540;
	sys->pos->dial_end.y = 540;
	sfSprite_setTexture(sys->sprite->dial_end, sys->texture->dial_end, sfTrue);
}

void my_end_story(win_t *sys)
{
	sfSprite_setPosition(sys->sprite->dial_end, sys->pos->dial_end);
	while (1) {
		//analyse_events(sys);
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->dial_end, NULL);
		sfRenderWindow_display(sys->win);
		//QUITTER
	}
}
