/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void hitbox_pata(win_t *sys)
{
	if (sys->pos->mouse.x <= sys->pos->pata.x + 99 && sys->pos->mouse.x
		>= sys->pos->pata.x - 10) {
		if (sys->pos->mouse.y <= sys->pos->pata.y + 107 &&
			sys->pos->mouse.y >= sys->pos->pata.y - 10) {
			sfMusic_play(sys->music_pata);
			sys->score = sys->score + 1;
			sys->pos->pata.y = -200;
			sys->rect->HUD_warren.left = sys->rect->max_HUD_warren
			- (sys->rect->HUD_warren.width) * 2;
		}
	}
}

void hitbox_woman_1(win_t *sys)
{
	if (sys->pos->mouse.x <= sys->pos->woman_1.x + 70 &&
		sys->pos->mouse.x >= sys->pos->woman_1.x - 10) {
		if (sys->pos->mouse.y <= sys->pos->woman_1.y + 107 &&
			sys->pos->mouse.y >= sys->pos->woman_1.y - 20) {
			sfMusic_play(sys->music_warren_second);
			sys->score = sys->score + 1;
			sys->pos->woman_1.x = 1900;
			sys->rect->HUD_warren.left = sys->rect->max_HUD_warren
			- (sys->rect->HUD_warren.width) * 2;
		}
	}
}

void hitbox_woman_2(win_t *sys)
{
	if (sys->pos->mouse.x <= sys->pos->woman_2.x + 80 &&
		sys->pos->mouse.x >= sys->pos->woman_2.x - 10) {
		if (sys->pos->mouse.y <= sys->pos->woman_2.y + 107
			&& sys->pos->mouse.y >= sys->pos->woman_2.y - 20) {
			sfMusic_play(sys->music_warren);
			sys->score = sys->score + 1;
			sys->pos->woman_2.y = 1100;
			sys->rect->HUD_warren.left = sys->rect->max_HUD_warren
			- (sys->rect->HUD_warren.width) * 2;
		}
	}
}
