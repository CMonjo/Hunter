/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void sfrender_HUD(win_t *sys)
{
	sfRenderWindow_drawSprite(sys->win, sys->sprite->bar, NULL);
	sfSprite_setPosition(sys->sprite->bar, sys->pos->bar);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->HUD_warren, NULL);
	sfSprite_setPosition(sys->sprite->HUD_warren, sys->pos->HUD_warren);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->mouse, NULL);
	sfSprite_setPosition(sys->sprite->mouse, sys->pos->mouse);
	sfRenderWindow_display(sys->win);
}

void sfrender_chracters(win_t *sys)
{
	sfRenderWindow_drawSprite(sys->win, sys->sprite->pata, NULL);
	sfSprite_setTextureRect(sys->sprite->pata, sys->rect->pata);
	sfSprite_setPosition(sys->sprite->pata, sys->pos->pata);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->warren, NULL);
	sfSprite_setTextureRect(sys->sprite->warren, sys->rect->warren);
	sfSprite_setPosition(sys->sprite->warren, sys->pos->warren);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->woman_1, NULL);
	sfSprite_setTextureRect(sys->sprite->woman_1, sys->rect->woman_1);
	sfSprite_setPosition(sys->sprite->woman_1, sys->pos->woman_1);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->woman_2, NULL);
	sfSprite_setTextureRect(sys->sprite->woman_2, sys->rect->woman_2);
	sfSprite_setPosition(sys->sprite->woman_2, sys->pos->woman_2);
}

void sfrender_system(win_t *sys)
{
	sfRenderWindow_drawSprite(sys->win, sys->sprite->background, NULL);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->recept, NULL);
	sfSprite_setPosition(sys->sprite->recept, sys->pos->recept);
	sfrender_chracters(sys);
	sfrender_HUD(sys);
}
