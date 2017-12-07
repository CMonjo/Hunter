/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void my_destroy(win_t *sys)
{
	sfSprite_destroy(sys->sprite->background);
	sfTexture_destroy(sys->texture->background);
	sfMusic_destroy(sys->music);
	sfRenderWindow_destroy(sys->win);
}

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
		//FAIRE UN IF SI ON APPUIE SUR ""&1" POUR METTRE LE SKILL PAUSE EN ROUGE ET SLOW LE TIME
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
	init_rect(sys);
}

int main(void)
{
	win_t *sys = malloc(sizeof(win_t));

	init_window(sys);
	sfMusic_play(sys->music);
	sfRenderWindow_setMouseCursorVisible(sys->win, sfFalse);
	while (sfRenderWindow_isOpen(sys->win)) {
		sys->time = sfClock_getElapsedTime(sys->clock);
		sys->seconds = sys->time.microseconds / 1000000.0;
		if (sys->seconds > 0.05)
			my_clock(sys);
		analyse_events(sys);
		sfrender_system(sys);
	}
	my_destroy(sys);
	return (0);
}
