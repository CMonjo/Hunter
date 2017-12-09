/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Story file
*/

#include "hunter.h"

void init_sprite_dial_bg_menu(win_t *sys)
{
	sys->sprite->bg_menu = sfSprite_create();
	sys->texture->bg_menu =
	sfTexture_createFromFile("assets/img/HUD/bg_menu.png", NULL);
	sfSprite_setTexture(sys->sprite->bg_menu,
		sys->texture->bg_menu, sfTrue);
}

void init_sprite_dial_ennemy(win_t *sys)
{
	sys->texture->dial_pata =
	sfTexture_createFromFile("assets/dialogue/dial_pata.png", NULL);
	sys->pos->dial_pata.x = 450;
	sys->pos->dial_pata.y = 265;
	sfSprite_setTexture(sys->sprite->dial_pata,
		sys->texture->dial_pata, sfTrue);
	sys->sprite->dial_universe = sfSprite_create();
	sys->texture->dial_universe =
	sfTexture_createFromFile("assets/dialogue/dial_universe.png", NULL);
	sys->pos->dial_universe.x = 450;
	sys->pos->dial_universe.y = 265;
	sfSprite_setTexture(sys->sprite->dial_universe,
		sys->texture->dial_universe, sfTrue);
	sys->sprite->dial_lost = sfSprite_create();
	sys->texture->dial_lost =
	sfTexture_createFromFile("assets/dialogue/dial_lost.png", NULL);
	sys->pos->dial_lost.x = 450;
	sys->pos->dial_lost.y = 265;
	sfSprite_setTexture(sys->sprite->dial_lost,
		sys->texture->dial_lost, sfTrue);
}

void init_sprite_dial(win_t *sys)
{
	sys->sprite->dial_start = sfSprite_create();
	sys->texture->dial_start =
	sfTexture_createFromFile("assets/dialogue/dial_start.png", NULL);
	sys->pos->dial_start.x = 450;
	sys->pos->dial_start.y = 265;
	sfSprite_setTexture(sys->sprite->dial_start,
		sys->texture->dial_start, sfTrue);
	sys->sprite->dial_info = sfSprite_create();
	sys->texture->dial_info =
	sfTexture_createFromFile("assets/dialogue/dial_info.png", NULL);
	sys->pos->dial_info.x = 450;
	sys->pos->dial_info.y = 265;
	sfSprite_setTexture(sys->sprite->dial_info,
		sys->texture->dial_info, sfTrue);
	sys->sprite->dial_pata = sfSprite_create();
	init_sprite_dial_bg_menu(sys);
	init_sprite_dial_ennemy(sys);
}

void my_score_end(win_t *sys)
{
	my_putstr("\n\n\n\nTU AS TUE ");
	my_put_nbr(sys->score);
	my_putstr(" MECHANT(S)\nC'EST DEJA PAS MAL !\n\n\n\n");
}
