/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Analyse events
*/

#include "hunter.h"

void analyse_events_hitbox(win_t *sys)
{
	if (sys->event.type == sfEvtMouseButtonPressed) {
		hitbox_pata(sys);
		hitbox_warren(sys);
		hitbox_woman_1(sys);
		hitbox_woman_2(sys);
		hitbox_warren_s(sys);
		hitbox_warren_q(sys);
		hitbox_warren_z(sys);
	}
}

void analyse_events(win_t *sys)
{
	while (sfRenderWindow_pollEvent(sys->win, &(sys->event))) {
		if (sys->event.type == sfEvtClosed) {
			sfRenderWindow_close(sys->win);
			my_score_end(sys);
			destroy_win(sys);
		}
		if (sys->event.type == sfEvtMouseMoved) {
			sys->pos->mouse.x = sys->event.mouseMove.x - 21;
			sys->pos->mouse.y = sys->event.mouseMove.y - 21;
		}
		analyse_events_hitbox(sys);
	}
}
