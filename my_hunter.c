/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

sfText *set_text(char *str, sfVector2f pos, sfFont *font, int size)
{
	sfText *tmp = sfText_create();
	sfText_setString(tmp, str);
	sfText_setFont(tmp, font);
	sfText_setCharacterSize(tmp, size);
	sfText_setPosition(tmp, pos);
	return (tmp);
}

void hitbox(sfMouseButtonEvent event, sfVector2f *pos_mouse, sfVector2f *pos_pata, sfVector2f *pos_warren, sfVector2f *pos_woman_1, sfVector2f *pos_woman_2)
{
	if (pos_mouse->x <= pos_pata->x + 99 && pos_mouse->x >= pos_pata->x - 10) {
		if (pos_mouse->y <= pos_pata->y + 107 && pos_mouse->y >= pos_pata->y - 10)
			pos_pata->y = -200;
	}
	if (pos_mouse->x <= pos_woman_2->x + 80 && pos_mouse->x >= pos_woman_2->x - 10) {
		if (pos_mouse->y <= pos_woman_2->y + 107 && pos_mouse->y >= pos_woman_2->y - 20)
			pos_woman_2->y = 1100;
	}
	if (pos_mouse->x <= pos_warren->x + 80 && pos_mouse->x >= pos_warren->x - 20) {
		if (pos_mouse->y <= pos_warren->y + 107 && pos_mouse->y >= pos_warren->y - 20)
			pos_warren->x = -200;
	}
	if (pos_mouse->x <= pos_woman_1->x + 70 && pos_mouse->x >= pos_woman_1->x - 10) {
		if (pos_mouse->y <= pos_woman_1->y + 107 && pos_mouse->y >= pos_woman_1->y - 20)
			pos_woman_1->x = 1900;
	}
}

void analyse_events(sfRenderWindow *window, sfEvent event, sfVector2f *pos_mouse, sfVector2f *pos_pata, sfVector2f *pos_warren, sfVector2f *pos_woman_1, sfVector2f *pos_woman_2)
{
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtMouseButtonPressed) {
			hitbox(event.mouseButton, pos_mouse, pos_pata, pos_warren, pos_woman_1, pos_woman_2);
		}
		if (event.type == sfEvtMouseMoved) {
			pos_mouse->x = event.mouseMove.x - 21;
			pos_mouse->y = event.mouseMove.y - 21;
		}
		//FAIRE UN IF SI ON APPUIE SUR ""&1" POUR METTRE LE SKILL PAUSE EN ROUGE ET SLOW LE TIME
	}
}

void move_HUD_warren(sfIntRect *rect, int offset, int max_value)
{
	if (rect->left >= max_value - offset)
		rect->left = offset;
	else
		rect->left += offset;
}

void move_spirte_pata(sfIntRect *rect, int offset, int max_value, sfVector2f *pos_pata, int *move_pata)
{
	if (rect->top >= max_value - offset)
		rect->top = offset;
	else
		rect->top += offset;
	pos_pata->y += (*move_pata);
	if (pos_pata->y >= 1090)
		pos_pata->y = -150;
}

void move_spirte_warren(sfIntRect *rect, int offset, int max_value, sfVector2f *pos_warren, int *move_warren)
{
	if (rect->top >= max_value - offset)
		rect->top = offset;
	else
		rect->top += offset;
	pos_warren->x += (*move_warren);
	if (pos_warren->x >= 1990)
		pos_warren->x = -150;
}

void move_spirte_woman_1(sfIntRect *rect, int offset, int max_value, sfVector2f *pos_woman_1, int *move_woman_1)
{
	if (rect->top >= max_value - offset)
		rect->top = offset;
	else
		rect->top += offset;
	pos_woman_1->x += (*move_woman_1);
	if (pos_woman_1->x <= -100)
		pos_woman_1->x = 1990;
}

void move_spirte_woman_2(sfIntRect *rect, int offset, int max_value, sfVector2f *pos_woman_2, int *move_woman_2)
{
	if (rect->top >= max_value - offset)
		rect->top = offset;
	else
		rect->top += offset;
	pos_woman_2->y += (*move_woman_2);
	if (pos_woman_2->y <= -150)
		pos_woman_2->y = 1150;
}

int main(void)
{
	//CHRACTERS
	sfSprite *sprite_pata = sfSprite_create();
	sfTexture *texture_pata = sfTexture_createFromFile("src/img/characters/pata.png", NULL);
	sfVector2f pos_pata = {675, -150};
	sfSprite_setTexture(sprite_pata, texture_pata, sfTrue);

	sfSprite *sprite_warren = sfSprite_create();
	sfTexture *texture_warren = sfTexture_createFromFile("src/img/characters/warren.png", NULL);
	sfVector2f pos_warren = {-150, 380};
	sfSprite_setTexture(sprite_warren, texture_warren, sfTrue);

	sfSprite *sprite_woman_1 = sfSprite_create();
	sfTexture *texture_woman_1 = sfTexture_createFromFile("src/img/characters/woman_1.png", NULL);
	sfVector2f pos_woman_1 = {1999, 430};
	sfSprite_setTexture(sprite_woman_1, texture_woman_1, sfTrue);

	sfSprite *sprite_woman_2 = sfSprite_create();
	sfTexture *texture_woman_2 = sfTexture_createFromFile("src/img/characters/woman_2.png", NULL);
	sfVector2f pos_woman_2 = {775, 1080};
	sfSprite_setTexture(sprite_woman_2, texture_woman_2, sfTrue);

	//SCORE
	sfFont *font = sfFont_createFromFile("src/font/arial.ttf");

	// char *nbr = malloc(sizeof(char *) * 1000);
	// nbr[0] = 't';
	sfVector2f pos_score = {1400, 992};
	sfText *score = set_text("", pos_score, font, 50);

	//BACKGROUND MENU
	sfSprite *sprite_background_menu = sfSprite_create();
	sfTexture *texture_background_menu = sfTexture_createFromFile("src/img/HUD/background_menu.png", NULL);
	sfSprite_setTexture(sprite_background_menu, texture_background_menu, sfTrue);

	//BACKGROUND
	sfSprite *sprite_background = sfSprite_create();
	sfTexture *texture_background = sfTexture_createFromFile("src/img/HUD/background.png", NULL);
	sfSprite_setTexture(sprite_background, texture_background, sfTrue);

	//DIALOGUES
	sfSprite *sprite_dialogue_warren_1 = sfSprite_create();
	sfTexture *texture_dialogue_warren_1 = sfTexture_createFromFile("src/dialogue/warren_diag_1.png", NULL);
	sfVector2f pos_dialogue_warren_1 = {540, 300};
	sfSprite_setTexture(sprite_dialogue_warren_1, texture_dialogue_warren_1, sfTrue);

	//HUD
	sfSprite *sprite_bar = sfSprite_create();
	sfTexture *texture_bar = sfTexture_createFromFile("src/img/HUD/bar.png", NULL);
	sfVector2f pos_bar = {0, 990};
	sfSprite_setTexture(sprite_bar, texture_bar, sfTrue);

	sfSprite *sprite_mouse = sfSprite_create();
	sfTexture *texture_mouse = sfTexture_createFromFile("src/img/HUD/mouse.png", NULL);
	sfVector2f pos_mouse = {750, 500};
	sfSprite_setTexture(sprite_mouse, texture_mouse, sfTrue);

	sfSprite *sprite_HUD_warren = sfSprite_create();
	sfTexture *texture_HUD_warren = sfTexture_createFromFile("src/img/HUD/HUD_warren.png", NULL);
	sfVector2f pos_HUD_warren = {50, 743};
	sfSprite_setTexture(sprite_HUD_warren, texture_HUD_warren, sfTrue);

	sfSprite *sprite_recept = sfSprite_create();
	sfTexture *texture_recept = sfTexture_createFromFile("src/img/characters/recept.png", NULL);
	sfVector2f pos_recept = {1780, 760};
	sfSprite_setTexture(sprite_recept, texture_recept, sfTrue);

	//LIFE
	sfSprite *sprite_life0 = sfSprite_create();
	sfTexture *texture_life0 = sfTexture_createFromFile("src/img/life/life0.png", NULL);
	sfSprite_setTexture(sprite_life0, texture_life0, sfTrue);
	sfSprite *sprite_life1 = sfSprite_create();
	sfTexture *texture_life1 = sfTexture_createFromFile("src/img/life/life1.png", NULL);
	sfSprite_setTexture(sprite_life1, texture_life1, sfTrue);
	sfSprite *sprite_life2 = sfSprite_create();
	sfTexture *texture_life2 = sfTexture_createFromFile("src/img/life/life2.png", NULL);
	sfSprite_setTexture(sprite_life2, texture_life2, sfTrue);
	sfSprite *sprite_life3 = sfSprite_create();
	sfTexture *texture_life3 = sfTexture_createFromFile("src/img/life/life3.png", NULL);
	sfSprite_setTexture(sprite_life3, texture_life3, sfTrue);
	sfSprite *sprite_life4 = sfSprite_create();
	sfTexture *texture_life4 = sfTexture_createFromFile("src/img/life/life4.png", NULL);
	sfSprite_setTexture(sprite_life4, texture_life4, sfTrue);
	sfSprite *sprite_life5 = sfSprite_create();
	sfTexture *texture_life5 = sfTexture_createFromFile("src/img/life/life5.png", NULL);
	sfSprite_setTexture(sprite_life5, texture_life5, sfTrue);
	sfSprite *sprite_life6 = sfSprite_create();
	sfTexture *texture_life6 = sfTexture_createFromFile("src/img/life/life6.png", NULL);
	sfSprite_setTexture(sprite_life6, texture_life6, sfTrue);
	sfVector2f pos_life = {1600, 1010};

	//PAUSE
	sfSprite *sprite_pause_off = sfSprite_create();
	sfTexture *texture_pause_off = sfTexture_createFromFile("src/img/skill/pause_off.png", NULL);
	sfSprite_setTexture(sprite_pause_off, texture_pause_off, sfTrue);
	sfSprite *sprite_pause_on = sfSprite_create();
	sfTexture *texture_pause_on = sfTexture_createFromFile("src/img/skill/pause_on.png", NULL);
	sfSprite_setTexture(sprite_pause_on, texture_pause_on, sfTrue);
	sfVector2f pos_pause = {915, 1000};

	//CLOCK
	sfClock *clock;
	sfTime time;
	float seconds;
	clock = sfClock_create();

	//RECT
	sfIntRect rect_HUD_warren = {0, 0, 150, 247};
	sfIntRect rect_pata = {0, 0, 80, 107};
	sfIntRect rect_warren = {0, 0, 80, 113};
	sfIntRect rect_woman_2 = {0, 0, 80, 136};
	sfIntRect rect_woman_1 = {0, 0, 80, 125};

	int move_pata = 10;
	int move_warren = 10;
	int move_woman_2 = -10;
	int move_woman_1 = -10;

	//WINDOW
	sfVideoMode mode = {1980, 1080, 32};
	sfRenderWindow* window;
	sfMusic *music = sfMusic_createFromFile("src/music/final.wav");
	sfEvent event;
	window = sfRenderWindow_create(mode, "MyHunter | The-Warrior.NET", sfResize | sfClose, NULL);
	sfMusic_play(music);
	sfRenderWindow_setMouseCursorVisible(window, sfFalse);
	while (sfRenderWindow_isOpen(window)) {
		time = sfClock_getElapsedTime(clock);
		seconds = time.microseconds / 1000000.0;
		//if (seconds > 0.07) {
		if (seconds > 0.05) {
			move_spirte_pata(&rect_pata, 107, 428, &pos_pata, &move_pata);
			move_spirte_warren(&rect_warren, 113, 452, &pos_warren, &move_warren);
			move_spirte_woman_1(&rect_woman_1, 125, 500, &pos_woman_1, &move_woman_1);
			move_spirte_woman_2(&rect_woman_2, 136, 544, &pos_woman_2, &move_woman_2);
			sfClock_restart(clock);
		}
		analyse_events(window, event, &pos_mouse, &pos_pata, &pos_warren, &pos_woman_1, &pos_woman_2);
		sfRenderWindow_drawSprite(window, sprite_background, NULL);

		sfRenderWindow_drawSprite(window, sprite_recept, NULL);
		sfSprite_setPosition(sprite_recept, pos_recept);

		sfRenderWindow_drawSprite(window, sprite_HUD_warren, NULL);
		sfSprite_setTextureRect(sprite_HUD_warren, rect_HUD_warren);
		sfSprite_setPosition(sprite_HUD_warren, pos_HUD_warren);

		sfRenderWindow_drawSprite(window, sprite_warren, NULL);
		sfSprite_setTextureRect(sprite_warren, rect_warren);
		sfSprite_setPosition(sprite_warren, pos_warren);

		sfRenderWindow_drawSprite(window, sprite_woman_1, NULL);
		sfSprite_setTextureRect(sprite_woman_1, rect_woman_1);
		sfSprite_setPosition(sprite_woman_1, pos_woman_1);

		sfRenderWindow_drawSprite(window, sprite_woman_2, NULL);
		sfSprite_setTextureRect(sprite_woman_2, rect_woman_2);
		sfSprite_setPosition(sprite_woman_2, pos_woman_2);

		sfRenderWindow_drawSprite(window, sprite_pata, NULL);
		sfSprite_setTextureRect(sprite_pata, rect_pata);
		sfSprite_setPosition(sprite_pata, pos_pata);

		sfRenderWindow_drawSprite(window, sprite_bar, NULL);
		sfSprite_setPosition(sprite_bar, pos_bar);

		sfRenderWindow_drawSprite(window, sprite_pause_on, NULL);
		sfSprite_setPosition(sprite_pause_on, pos_pause);

		sfRenderWindow_drawSprite(window, sprite_life4, NULL);
		sfSprite_setPosition(sprite_life4, pos_life);

		sfRenderWindow_drawText(window, score, NULL);

		sfRenderWindow_drawSprite(window, sprite_mouse, NULL);
		sfSprite_setPosition(sprite_mouse, pos_mouse);

		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
	sfMusic_destroy(music);
	sfFont_destroy(font);
	sfText_destroy(score);
	sfSprite_destroy(sprite_background_menu);
	sfTexture_destroy(texture_background_menu);
	sfSprite_destroy(sprite_background);
	sfTexture_destroy(texture_background);
	sfSprite_destroy(sprite_dialogue_warren_1);
	sfTexture_destroy(texture_dialogue_warren_1);
	sfSprite_destroy(sprite_pata);
	sfTexture_destroy(texture_pata);
	sfSprite_destroy(sprite_warren);
	sfTexture_destroy(texture_warren);
	sfSprite_destroy(sprite_woman_1);
	sfTexture_destroy(texture_woman_1);
	sfSprite_destroy(sprite_woman_2);
	sfTexture_destroy(texture_woman_2);
	sfSprite_destroy(sprite_bar);
	sfTexture_destroy(texture_bar);
	sfSprite_destroy(sprite_mouse);
	sfTexture_destroy(texture_mouse);
	sfSprite_destroy(sprite_HUD_warren);
	sfTexture_destroy(texture_HUD_warren);
	sfSprite_destroy(sprite_recept);
	sfTexture_destroy(texture_recept);
	sfSprite_destroy(sprite_pause_off);
	sfTexture_destroy(texture_pause_off);
	sfSprite_destroy(sprite_pause_on);
	sfTexture_destroy(texture_pause_on);
	sfClock_destroy(clock);
	//DESTROY LIFE QUAND ELLE SERA EN UN SPRITE
	return (0);
}
