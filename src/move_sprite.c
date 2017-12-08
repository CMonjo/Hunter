/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void move_sprite_pata(win_t *sys)
{
	if (sys->rect->pata.top >= sys->rect->max_pata - sys->rect->pata.height)
		sys->rect->pata.top = sys->rect->pata.height;
	else
		sys->rect->pata.top += sys->rect->pata.height;
	sys->pos->pata.y += 10;
	if (sys->pos->pata.y >= 1090) {
		my_life_first(sys);
		sys->pos->pata.y = -150;
	}
}

void move_sprite_warren_s(win_t *sys)
{
	if (sys->rect->warren_s.top >= sys->rect->max_warren_s - sys->rect->warren_s.height)
		sys->rect->warren_s.top = sys->rect->warren_s.height;
	else
		sys->rect->warren_s.top += sys->rect->warren_s.height;
	sys->pos->warren_s.y += 4;
	if (sys->pos->warren_s.y >= 1090) {
		sys->pos->warren_s.y = -150;
	}
}

void move_sprite_warren(win_t *sys)
{
	if (sys->rect->warren.top >= sys->rect->max_warren - sys->rect->warren.height)
		sys->rect->warren.top = sys->rect->warren.height;
	else
		sys->rect->warren.top += sys->rect->warren.height;
	sys->pos->warren.x += 6;
	if (sys->pos->warren.x >= 1990) {
		sys->pos->warren.x = -150;
	}
}

void move_sprite_woman_1(win_t *sys)
{
	if (sys->rect->woman_1.top >= sys->rect->max_woman_1 - sys->rect->woman_1.height)
		sys->rect->woman_1.top = sys->rect->woman_1.height;
	else
		sys->rect->woman_1.top += sys->rect->woman_1.height;
	sys->pos->woman_1.x += -10;
	if (sys->pos->woman_1.x <= -100) {
		my_life_first(sys);
		sys->pos->woman_1.x = 1990;
	}
}

void move_sprite_warren_q(win_t *sys)
{
	if (sys->rect->warren_q.top >= sys->rect->max_warren_q - sys->rect->warren_q.height)
		sys->rect->warren_q.top = sys->rect->warren_q.height;
	else
		sys->rect->warren_q.top += sys->rect->warren_q.height;
	sys->pos->warren_q.x += -6;
	if (sys->pos->warren_q.x <= -100) {
		sys->pos->warren_q.x = 1990;
	}
}

void move_sprite_woman_2(win_t *sys)
{
	if (sys->rect->woman_2.top >= sys->rect->max_woman_2 - sys->rect->woman_2.height)
		sys->rect->woman_2.top = sys->rect->woman_2.height;
	else
		sys->rect->woman_2.top += sys->rect->woman_2.height;
	sys->pos->woman_2.y += -10;
	if (sys->pos->woman_2.y <= -150) {
		my_life_first(sys);
		sys->pos->woman_2.y = 1150;
	}
}

void move_sprite_warren_z(win_t *sys)
{
	if (sys->rect->warren_z.top >= sys->rect->max_warren_z - sys->rect->warren_z.height)
		sys->rect->warren_z.top = sys->rect->warren_z.height;
	else
		sys->rect->warren_z.top += sys->rect->warren_z.height;
	sys->pos->warren_z.y += -7;
	if (sys->pos->warren_z.y <= -150) {
		sys->pos->warren_z.y = 1150;
	}
}
