/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include "hunter.h"

void my_destroy(win_t *sys)
{
	sfRenderWindow_close(sys->win);
	sfSprite_destroy(sys->sprite->background);
	sfTexture_destroy(sys->texture->background);
	sfMusic_destroy(sys->music);
	sfRenderWindow_destroy(sys->win);
}

void init_sprite_dial(win_t *sys)
{
	sys->sprite->bg_menu = sfSprite_create();
	sys->texture->bg_menu = sfTexture_createFromFile("assets/img/HUD/bg_menu.png", NULL);
	sfSprite_setTexture(sys->sprite->bg_menu, sys->texture->bg_menu, sfTrue);

	sys->sprite->dial_start = sfSprite_create();
	sys->texture->dial_start = sfTexture_createFromFile("assets/dialogue/dial_start.png", NULL);
	sys->pos->dial_start.x = 450;
	sys->pos->dial_start.y = 265;
	sfSprite_setTexture(sys->sprite->dial_start, sys->texture->dial_start, sfTrue);

	sys->sprite->dial_info = sfSprite_create();
	sys->texture->dial_info = sfTexture_createFromFile("assets/dialogue/dial_info.png", NULL);
	sys->pos->dial_info.x = 450;
	sys->pos->dial_info.y = 265;
	sfSprite_setTexture(sys->sprite->dial_info, sys->texture->dial_info, sfTrue);

	sys->sprite->dial_pata = sfSprite_create();
	sys->texture->dial_pata = sfTexture_createFromFile("assets/dialogue/dial_pata.png", NULL);
	sys->pos->dial_pata.x = 450;
	sys->pos->dial_pata.y = 265;
	sfSprite_setTexture(sys->sprite->dial_pata, sys->texture->dial_pata, sfTrue);

	sys->sprite->dial_universe = sfSprite_create();
	sys->texture->dial_universe = sfTexture_createFromFile("assets/dialogue/dial_universe.png", NULL);
	sys->pos->dial_universe.x = 450;
	sys->pos->dial_universe.y = 265;
	sfSprite_setTexture(sys->sprite->dial_universe, sys->texture->dial_universe, sfTrue);

	sys->sprite->dial_lost = sfSprite_create();
	sys->texture->dial_lost = sfTexture_createFromFile("assets/dialogue/dial_lost.png", NULL);
	sys->pos->dial_lost.x = 450;
	sys->pos->dial_lost.y = 265;
	sfSprite_setTexture(sys->sprite->dial_lost, sys->texture->dial_lost, sfTrue);
}

void my_end_story_option(win_t *sys)
{
	while (sys->key == 3) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_lost, sys->pos->dial_lost);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->dial_lost, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeyR)) {
			sys->key = 1;
			sys->rect->life.top = 343;
		}
		if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
			my_destroy(sys);
			my_putstr("TU AS TUE");
			my_putnbr(sys->score);
			my_putstr("MECHANTS");
			exit (0);
		}
	}
}

void my_end_story_second(win_t *sys)
{
	while (sys->key == 2) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_universe, sys->pos->dial_universe);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->dial_universe, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeyB))
			sys->key = 3;
	}
	if (sys->key == 3)
		my_end_story_option(sys);
}

void my_end_story(win_t *sys)
{
	while (sys->key == 1) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_pata, sys->pos->dial_pata);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->dial_pata, NULL);
		sfRenderWindow_display(sys->win);
		if (sfKeyboard_isKeyPressed(sfKeySpace))
			sys->key = 2;
	}
	if (sys->key == 2)
		my_end_story_second(sys);
}

int my_begin_end_story(win_t *sys)
{
	while (sys->key == 4) {
		sfRenderWindow_clear(sys->win, sfBlack);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->bg_menu, NULL);
		sfSprite_setPosition(sys->sprite->dial_info, sys->pos->dial_info);
		sfRenderWindow_drawSprite(sys->win, sys->sprite->dial_info, NULL);
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
			sfRenderWindow_drawSprite(sys->win, sys->sprite->bg_menu, NULL);
			sfSprite_setPosition(sys->sprite->dial_start, sys->pos->dial_start);
			sfRenderWindow_drawSprite(sys->win, sys->sprite->dial_start, NULL);
			sfRenderWindow_display(sys->win);
			if (sfKeyboard_isKeyPressed(sfKeySpace))
				sys->key = 4;
	}
	if (sys->key == 4)
		my_begin_end_story(sys);
}