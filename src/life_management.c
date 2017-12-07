/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void my_life_third(win_t *sys)
{
	if (sys->rect->life.top == 147)
		sys->rect->life.top = 98;
	else if (sys->rect->life.top == 98)
		sys->rect->life.top = 49;
	else
		sys->rect->life.top = 0;
}

void my_life_second(win_t *sys)
{
	if (sys->rect->life.top == 245)
		sys->rect->life.top = 196;
	else if (sys->rect->life.top == 196)
		sys->rect->life.top = 147;
	else
		my_life_third(sys);
}

void my_life_first(win_t *sys)
{
	if (sys->rect->life.top == 343)
		sys->rect->life.top = 294;
	else if (sys->rect->life.top == 294)
		sys->rect->life.top = 245;
	else
		my_life_second(sys);
}
