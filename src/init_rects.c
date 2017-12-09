/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Initialisation rects
*/

#include "hunter.h"

void init_rect_third(win_t *sys)
{
	sys->rect->warren_s.left = 0;
	sys->rect->warren_s.top = 0;
	sys->rect->warren_s.width = 80;
	sys->rect->warren_s.height = 107;
	sys->rect->max_pata = 428;
	sys->rect->max_warren_s = 428;
	sys->rect->max_warren = 452;
	sys->rect->max_woman_1 = 500;
	sys->rect->max_warren_q = 500;
	sys->rect->max_woman_2 = 544;
	sys->rect->max_warren_z = 544;
	sys->rect->max_HUD_warren = 564;
}

void init_rect_second(win_t *sys)
{
	sys->rect->woman_1.left = 0;
	sys->rect->woman_1.top = 0;
	sys->rect->woman_1.width = 80;
	sys->rect->woman_1.height = 125;
	sys->rect->warren_q.left = 0;
	sys->rect->warren_q.top = 0;
	sys->rect->warren_q.width = 80;
	sys->rect->warren_q.height = 125;
	sys->rect->woman_2.left = 0;
	sys->rect->woman_2.top = 0;
	sys->rect->woman_2.width = 80;
	sys->rect->woman_2.height = 136;
	sys->rect->warren_z.left = 0;
	sys->rect->warren_z.top = 0;
	sys->rect->warren_z.width = 80;
	sys->rect->warren_z.height = 136;
	init_rect_third(sys);
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
