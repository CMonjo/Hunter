/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void move_sprite_pata(win_t *sys)
{
	if (sys->rect->pata.top >=
		sys->rect->max_pata - sys->rect->pata.height)
		sys->rect->pata.top = sys->rect->pata.height;
	else
		sys->rect->pata.top += sys->rect->pata.height;
	sys->pos->pata.y += 12;
	if (sys->pos->pata.y >= 1090) {
		my_life_first(sys);
		sys->pos->pata.y = -150;
	}
}

void move_sprite_woman_1(win_t *sys)
{
	if (sys->rect->woman_1.top >=
		sys->rect->max_woman_1 - sys->rect->woman_1.height)
		sys->rect->woman_1.top = sys->rect->woman_1.height;
	else
		sys->rect->woman_1.top += sys->rect->woman_1.height;
	sys->pos->woman_1.x += -12;
	if (sys->pos->woman_1.x <= -100) {
		my_life_first(sys);
		sys->pos->woman_1.x = 1990;
	}
}

void move_sprite_woman_2(win_t *sys)
{
	if (sys->rect->woman_2.top >=
		sys->rect->max_woman_2 - sys->rect->woman_2.height)
		sys->rect->woman_2.top = sys->rect->woman_2.height;
	else
		sys->rect->woman_2.top += sys->rect->woman_2.height;
	sys->pos->woman_2.y += -12;
	if (sys->pos->woman_2.y <= -150) {
		my_life_first(sys);
		sys->pos->woman_2.y = 1150;
	}
}
