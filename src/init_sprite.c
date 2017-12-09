/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Initialisation sprites
*/

#include "hunter.h"

void init_sprite_chracters_allies_second(win_t *sys)
{
	sys->sprite->warren_q = sfSprite_create();
	sys->texture->warren_q =
	sfTexture_createFromFile("assets/img/characters/warren_q.png", NULL);
	sys->pos->warren_q.x = 1999;
	sys->pos->warren_q.y = 400;
	sfSprite_setTexture(sys->sprite->warren_q,
		sys->texture->warren_q, sfTrue);
	sys->sprite->warren_z = sfSprite_create();
	sys->texture->warren_z =
	sfTexture_createFromFile("assets/img/characters/warren_z.png", NULL);
	sys->pos->warren_z.x = 735;
	sys->pos->warren_z.y = 1080;
	sfSprite_setTexture(sys->sprite->warren_z,
		sys->texture->warren_z, sfTrue);
}

void init_sprite_chracters_allies(win_t *sys)
{
	sys->sprite->warren_s = sfSprite_create();
	sys->texture->warren_s =
	sfTexture_createFromFile("assets/img/characters/warren_s.png", NULL);
	sys->pos->warren_s.x = 660;
	sys->pos->warren_s.y = -150;
	sfSprite_setTexture(sys->sprite->warren_s,
		sys->texture->warren_s, sfTrue);
	sys->sprite->warren = sfSprite_create();
	sys->texture->warren =
	sfTexture_createFromFile("assets/img/characters/warren.png", NULL);
	sys->pos->warren.x = -150;
	sys->pos->warren.y = 380;
	sfSprite_setTexture(sys->sprite->warren, sys->texture->warren, sfTrue);
	init_sprite_chracters_allies_second(sys);
}

void init_sprite_chracters_ennemys_second(win_t *sys)
{
	sys->sprite->woman_2 = sfSprite_create();
	sys->texture->woman_2 =
	sfTexture_createFromFile("assets/img/characters/woman_2.png", NULL);
	sys->pos->woman_2.x = 775;
	sys->pos->woman_2.y = 1080;
	sfSprite_setTexture(sys->sprite->woman_2,
		sys->texture->woman_2, sfTrue);
	init_sprite_chracters_allies(sys);
}

void init_sprite_chracters_ennemys(win_t *sys)
{
	sys->sprite->pata = sfSprite_create();
	sys->texture->pata =
	sfTexture_createFromFile("assets/img/characters/pata.png", NULL);
	sys->pos->pata.x = 700;
	sys->pos->pata.y = -100;
	sfSprite_setTexture(sys->sprite->pata, sys->texture->pata, sfTrue);
	sys->sprite->woman_1 = sfSprite_create();
	sys->texture->woman_1 =
	sfTexture_createFromFile("assets/img/characters/woman_1.png", NULL);
	sys->pos->woman_1.x = 1999;
	sys->pos->woman_1.y = 430;
	sfSprite_setTexture(sys->sprite->woman_1,
		sys->texture->woman_1, sfTrue);
	init_sprite_chracters_ennemys_second(sys);
}
