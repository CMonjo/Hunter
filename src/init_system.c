/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void init_sprite_system_second(win_t *sys)
{
	sys->sprite->HUD_warren = sfSprite_create();
	sys->texture->HUD_warren =
	sfTexture_createFromFile("assets/img/HUD/HUD_warren.png", NULL);
	sys->pos->HUD_warren.x = 50;
	sys->pos->HUD_warren.y = 715;
	sfSprite_setTexture(sys->sprite->HUD_warren,
		sys->texture->HUD_warren, sfTrue);
	sys->sprite->recept = sfSprite_create();
	sys->texture->recept =
	sfTexture_createFromFile("assets/img/characters/recept.png", NULL);
	sys->pos->recept.x = 1780;
	sys->pos->recept.y = 760;
	sfSprite_setTexture(sys->sprite->recept, sys->texture->recept, sfTrue);
	sys->sprite->life = sfSprite_create();
	sys->texture->life =
	sfTexture_createFromFile("assets/img/HUD/life.png", NULL);
	sys->pos->life.x = 670;
	sys->pos->life.y = 998;
	sfSprite_setTexture(sys->sprite->life, sys->texture->life, sfTrue);
}
void init_sprite_system(win_t *sys)
{
	sys->sprite->background = sfSprite_create();
	sys->texture->background =
	sfTexture_createFromFile("assets/img/HUD/background.png", NULL);
	sfSprite_setTexture(sys->sprite->background,
		sys->texture->background, sfTrue);
	sys->sprite->bar = sfSprite_create();
	sys->texture->bar =
	sfTexture_createFromFile("assets/img/HUD/bar.png", NULL);
	sys->pos->bar.x = 0;
	sys->pos->bar.y = 990;
	sfSprite_setTexture(sys->sprite->bar, sys->texture->bar, sfTrue);
	sys->sprite->mouse = sfSprite_create();
	sys->texture->mouse =
	sfTexture_createFromFile("assets/img/HUD/mouse.png", NULL);
	sys->pos->mouse.x = 750;
	sys->pos->mouse.y = 500;
	sfSprite_setTexture(sys->sprite->mouse, sys->texture->mouse, sfTrue);
	init_sprite_system_second(sys);
}
