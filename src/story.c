/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Story file
*/

#include "hunter.h"

int my_end_story_option(win_t *sys)
{
	while (sys->key == 3) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_lost,
			sys->pos->dial_lost);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->dial_lost, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeyR)) {
			sys->key = 1;
			sys->rect->life.top = 343;
		}
		if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
			destroy_win(sys);
			my_score_end(sys);
			return (0);
		}
	}
	return (0);
}

int my_end_story_second(win_t *sys)
{
	while (sys->key == 2) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_universe,
			sys->pos->dial_universe);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->dial_universe, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeySpace))
			sys->key = 3;
	}
	if (sys->key == 3)
		my_end_story_option(sys);
	return (0);
}

int my_end_story(win_t *sys)
{
	while (sys->key == 1) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_pata,
			sys->pos->dial_pata);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->dial_pata, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeyReturn))
			sys->key = 2;
	}
	if (sys->key == 2)
		my_end_story_second(sys);
	return (0);
}

int my_begin_end_story(win_t *sys)
{
	while (sys->key == 4) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_info,
			sys->pos->dial_info);
		sfRenderWindow_drawSprite(sys->win,
			sys->sprite->dial_info, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeyReturn))
			sys->key = 1;
	}
	return (0);
}

void my_begin_story(win_t *sys)
{
	while (sys->key == 5) {
			sfRenderWindow_clear(sys->win, sfBlack);
			sfRenderWindow_drawSprite(sys->win,
				sys->sprite->bg_menu, NULL);
			sfSprite_setPosition(sys->sprite->dial_start,
				sys->pos->dial_start);
			sfRenderWindow_drawSprite(sys->win,
				sys->sprite->dial_start, NULL);
			sfRenderWindow_display(sys->win);
			if (sfKeyboard_isKeyPressed(sfKeySpace))
				sys->key = 4;
	}
	if (sys->key == 4)
		my_begin_end_story(sys);
}
