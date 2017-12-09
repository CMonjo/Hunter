/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void sfrender_HUD(win_t *sys)
{
	sfRenderWindow_drawSprite(sys->win, sys->sprite->warren_q, NULL);
	sfSprite_setTextureRect(sys->sprite->warren_q, sys->rect->warren_q);
	sfSprite_setPosition(sys->sprite->warren_q, sys->pos->warren_q);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->bar, NULL);
	sfSprite_setPosition(sys->sprite->bar, sys->pos->bar);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->HUD_warren, NULL);
	sfSprite_setPosition(sys->sprite->HUD_warren, sys->pos->HUD_warren);
	sfSprite_setTextureRect(sys->sprite->HUD_warren, sys->rect->HUD_warren);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->life, NULL);
	sfSprite_setPosition(sys->sprite->life, sys->pos->life);
	sfSprite_setTextureRect(sys->sprite->life, sys->rect->life);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->mouse, NULL);
	sfSprite_setPosition(sys->sprite->mouse, sys->pos->mouse);
	sfRenderWindow_display(sys->win);
}

void sfrender_chracters(win_t *sys)
{
	sfRenderWindow_drawSprite(sys->win, sys->sprite->pata, NULL);
	sfSprite_setTextureRect(sys->sprite->pata, sys->rect->pata);
	sfSprite_setPosition(sys->sprite->pata, sys->pos->pata);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->warren_s, NULL);
	sfSprite_setTextureRect(sys->sprite->warren_s, sys->rect->warren_s);
	sfSprite_setPosition(sys->sprite->warren_s, sys->pos->warren_s);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->warren, NULL);
	sfSprite_setTextureRect(sys->sprite->warren, sys->rect->warren);
	sfSprite_setPosition(sys->sprite->warren, sys->pos->warren);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->woman_1, NULL);
	sfSprite_setTextureRect(sys->sprite->woman_1, sys->rect->woman_1);
	sfSprite_setPosition(sys->sprite->woman_1, sys->pos->woman_1);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->woman_2, NULL);
	sfSprite_setTextureRect(sys->sprite->woman_2, sys->rect->woman_2);
	sfSprite_setPosition(sys->sprite->woman_2, sys->pos->woman_2);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->warren_z, NULL);
	sfSprite_setTextureRect(sys->sprite->warren_z, sys->rect->warren_z);
	sfSprite_setPosition(sys->sprite->warren_z, sys->pos->warren_z);
}

void sfrender_system(win_t *sys)
{
	sfRenderWindow_drawSprite(sys->win, sys->sprite->background, NULL);
	sfRenderWindow_drawSprite(sys->win, sys->sprite->recept, NULL);
	sfSprite_setPosition(sys->sprite->recept, sys->pos->recept);
	sfrender_chracters(sys);
	sfrender_HUD(sys);
}
