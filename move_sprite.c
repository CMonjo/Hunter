/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void move_spirte_pata(win_t *sys)
{
	if (sys->rect->pata.top >= sys->rect->max_pata - sys->rect->pata.height)
		sys->rect->pata.top = sys->rect->pata.height;
	else
		sys->rect->pata.top += sys->rect->pata.height;
	sys->pos->pata.y += 10;
	if (sys->pos->pata.y >= 1090)
		sys->pos->pata.y = -150;
}

void move_spirte_warren(win_t *sys)
{
	if (sys->rect->warren.top >= sys->rect->max_warren - sys->rect->warren.height)
		sys->rect->warren.top = sys->rect->warren.height;
	else
		sys->rect->warren.top += sys->rect->warren.height;
	sys->pos->warren.x += 10;
	if (sys->pos->warren.x >= 1990)
		sys->pos->warren.x = -150;
}

void move_spirte_woman_1(win_t *sys)
{
	if (sys->rect->woman_1.top >= sys->rect->max_woman_1 - sys->rect->woman_1.height)
		sys->rect->woman_1.top = sys->rect->woman_1.height;
	else
		sys->rect->woman_1.top += sys->rect->woman_1.height;
	sys->pos->woman_1.x += -10;
	if (sys->pos->woman_1.x <= -100)
		sys->pos->woman_1.x = 1990;
}

void move_spirte_woman_2(win_t *sys)
{
	if (sys->rect->woman_2.top >= sys->rect->max_woman_2 - sys->rect->woman_2.height)
		sys->rect->woman_2.top = sys->rect->woman_2.height;
	else
		sys->rect->woman_2.top += sys->rect->woman_2.height;
	sys->pos->woman_2.y += -10;
	if (sys->pos->woman_2.y <= -150)
		sys->pos->woman_2.y = 1150;
}
