/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void analyse_events(win_t *sys)
{
	while (sfRenderWindow_pollEvent(sys->win, &(sys->event))) {
		if (sys->event.type == sfEvtClosed)
			sfRenderWindow_close(sys->win);
		if (sys->event.type == sfEvtMouseButtonPressed) {
			hitbox_pata(sys);
			hitbox_warren(sys);
			hitbox_woman_1(sys);
			hitbox_woman_2(sys);
		}
		if (sys->event.type == sfEvtMouseMoved) {
			sys->pos->mouse.x = sys->event.mouseMove.x - 21;
			sys->pos->mouse.y = sys->event.mouseMove.y - 21;
		}
	}
}

void my_clock(win_t *sys)
{
	move_spirte_pata(sys);
	move_spirte_warren(sys);
	move_spirte_woman_1(sys);
	move_spirte_woman_2(sys);
	sfClock_restart(sys->clock);
}

void init_window(win_t *sys)
{
	sfVideoMode mode = {1980, 1080, 32};
	sys->clock = sfClock_create();
	sys->music = sfMusic_createFromFile("assets/music/final.wav");
	sys->win = sfRenderWindow_create(mode, "MyHunter", sfResize | sfClose, NULL);
	sys->sprite = malloc(sizeof(sprite_t));
	sys->texture = malloc(sizeof(texture_t));
	sys->pos = malloc(sizeof(position_t));
	sys->rect = malloc(sizeof(rect_t));
	init_sprite_system(sys);
	init_sprite_chracters(sys);
	init_sprite_dial(sys);
	init_rect(sys);
}

void my_window(win_t *sys)
{
	init_window(sys);
	sfMusic_play(sys->music);
	sfRenderWindow_setMouseCursorVisible(sys->win, sfFalse);
	while (sfRenderWindow_isOpen(sys->win)) {
		// if (sys->rect->life.top == 0)
		// 	my_end_story(sys);
		sys->time = sfClock_getElapsedTime(sys->clock);
		sys->seconds = sys->time.microseconds / 1000000.0;
		if (sys->seconds > 0.05)
			my_clock(sys);
		//sfRenderWindow_clear(sys->win, sfBlack);
		sfrender_system(sys);
		analyse_events(sys);
	}
}

int main(int ac, char **av)
{
	win_t *sys = malloc(sizeof(win_t));

	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr("The goal of the game is...\n");
		return (0);
	}
	else if (ac >= 2) {
		my_putstr("You must type './my_hunter' for start the game\n");
		my_putstr("If you need more informations ");
		my_putstr("type './my_hunter -h'\n");
		return (84);
	}
	else
		my_window(sys);
	return (0);
}
