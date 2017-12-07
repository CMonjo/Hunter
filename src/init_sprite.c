/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void init_rect_second(win_t *sys)
{
	sys->rect->woman_1.left = 0;
	sys->rect->woman_1.top = 0;
	sys->rect->woman_1.width = 80;
	sys->rect->woman_1.height = 125;
	sys->rect->woman_2.left = 0;
	sys->rect->woman_2.top = 0;
	sys->rect->woman_2.width = 80;
	sys->rect->woman_2.height = 136;
	sys->rect->max_pata = 428;
	sys->rect->max_warren = 452;
	sys->rect->max_woman_1 = 500;
	sys->rect->max_woman_2 = 544;
	sys->rect->max_HUD_warren = 564;
}
void init_rect(win_t *sys)
{
	sys->rect->HUD_warren.left = 0;
	sys->rect->HUD_warren.top = 0;
	sys->rect->HUD_warren.width = 188;
	sys->rect->HUD_warren.height = 275;
	sys->rect->life.left = 0;
	sys->rect->life.top = 294;
	sys->rect->life.width = 200;
	sys->rect->life.height = 49;
	sys->rect->pata.left = 0;
	sys->rect->pata.top = 0;
	sys->rect->pata.width = 80;
	sys->rect->pata.height = 107;
	sys->rect->warren.left = 0;
	sys->rect->warren.top = 0;
	sys->rect->warren.width = 80;
	sys->rect->warren.height = 113;
	init_rect_second(sys);
}

void init_sprite_chracters(win_t *sys)
{
	sys->sprite->pata = sfSprite_create();
	sys->texture->pata = sfTexture_createFromFile("assets/img/characters/pata.png", NULL);
	sys->pos->pata.x = 675;
	sys->pos->pata.y = -150;
	sfSprite_setTexture(sys->sprite->pata, sys->texture->pata, sfTrue);
	sys->sprite->warren = sfSprite_create();
	sys->texture->warren = sfTexture_createFromFile("assets/img/characters/warren.png", NULL);
	sys->pos->warren.x = -150;
	sys->pos->warren.y = 380;
	sfSprite_setTexture(sys->sprite->warren, sys->texture->warren, sfTrue);
	sys->sprite->woman_1 = sfSprite_create();
	sys->texture->woman_1 = sfTexture_createFromFile("assets/img/characters/woman_1.png", NULL);
	sys->pos->woman_1.x = 1999;
	sys->pos->woman_1.y = 430;
	sfSprite_setTexture(sys->sprite->woman_1, sys->texture->woman_1, sfTrue);
	sys->sprite->woman_2 = sfSprite_create();
	sys->texture->woman_2 = sfTexture_createFromFile("assets/img/characters/woman_2.png", NULL);
	sys->pos->woman_2.x = 775;
	sys->pos->woman_2.y = 1080;
	sfSprite_setTexture(sys->sprite->woman_2, sys->texture->woman_2, sfTrue);
}
