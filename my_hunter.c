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

void close_window(sfRenderWindow *window)
{
	sfRenderWindow_close(window);
}

void manage_mouse_click(sfMouseButtonEvent event)
{
	printf("Mouse x=%d y=%d\n", event.x, event.y);
}

void analyse_events(sfRenderWindow *window, sfEvent event)
{
	if (event.type == sfEvtMouseButtonPressed)
		manage_mouse_click(event.mouseButton);
	if (event.type == sfEvtClosed)
		close_window(window);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
	if (rect->left == max_value - offset)
		rect->left = 0;
	else
		rect->left += offset;
}

sfText *set_text(char *str, sfVector2f pos, sfFont *font, int size)
{
	sfText *tmp = sfText_create();
	sfText_setString(tmp, str);
	sfText_setFont(tmp, font);
	sfText_setCharacterSize(tmp, size);
	sfText_setPosition(tmp, pos);
	return (tmp);
}

int main(void)
{
	sfVector2f position;
	position.x = -110;
	position.y = 330;
	sfVideoMode mode = {1980, 1080, 32};
	sfRenderWindow* window;
	sfEvent event;
	sfIntRect rect = {0, 0, 110, 110};

	//TEXT
	sfFont *font = sfFont_createFromFile("src/font/arial.ttf");

	sfVector2f pos_score = {1600, 875};
	sfText *score = set_text("Score", pos_score, font, 50);

	sfVector2f pos_nbr_score = {1600, 925};
	sfText *nbr_score = set_text("000", pos_nbr_score, font, 50);

	//DIALOGUES & WALLPAPER MENU
	sfSprite *sprite_wallpaper_menu = sfSprite_create();
	sfTexture *texture_wallpaper_menu = sfTexture_createFromFile("src/img/wallpaper_menu.png", NULL);
	sfSprite_setTexture(sprite_wallpaper_menu, texture_wallpaper_menu, sfTrue);
	sfVector2f pos_wallpaper_menu = {0, 0};

	sfSprite *sprite_dialogue_warren_1 = sfSprite_create();
	sfTexture *texture_dialogue_warren_1 = sfTexture_createFromFile("src/img/dialogue_warren_1.png", NULL);
	sfVector2f pos_dialogue_warren_1 = {540, 300};
	sfSprite_setTexture(sprite_dialogue_warren_1, texture_dialogue_warren_1, sfTrue);

	//TEXTURES
	sfSprite *sprite_duck = sfSprite_create();
	sfTexture *texture_duck = sfTexture_createFromFile("src/img/spritesheet.png", NULL);
	sfSprite_setTexture(sprite_duck, texture_duck, sfTrue);
	sfVector2f pos_duck = {100, 100};

	sfSprite *sprite_bar = sfSprite_create();
	sfTexture *texture_bar = sfTexture_createFromFile("src/img/bar.png", NULL);
	sfSprite_setTexture(sprite_bar, texture_bar, sfTrue);
	sfVector2f pos_bar = {0, 990};

	sfSprite *sprite_warren = sfSprite_create();
	sfTexture *texture_warren = sfTexture_createFromFile("src/img/warren.png", NULL);
	sfSprite_setTexture(sprite_warren, texture_warren, sfTrue);
	sfVector2f pos_warren = {50, 743};


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

	//WALLPAPER
	sfSprite *sprite_wallpaper = sfSprite_create();
	sfTexture *texture_wallpaper = sfTexture_createFromFile("src/img/wallpaper.jpg", NULL);
	sfSprite_setTexture(sprite_wallpaper, texture_wallpaper, sfTrue);

	//CLOCK
	sfClock *clock;
	sfTime time;
	float seconds;
	clock = sfClock_create();

	//WINDOW
	window = sfRenderWindow_create(mode, "MyHunter", sfResize | sfClose, NULL);
	while (sfRenderWindow_isOpen(window)) {
		time = sfClock_getElapsedTime(clock);
		seconds = time.microseconds / 1000000.0;
		while (sfRenderWindow_pollEvent(window, &event)) {
			analyse_events(window, event);
		}
		if (seconds > 0.017)
			position.x += 0.9;
		position.y = 100 + asinf(seconds);
		if (seconds > 0.1) {
			move_rect(&rect, 110, 330);
			sfClock_restart(clock);
		}
		sfRenderWindow_drawSprite(window, sprite_wallpaper, NULL);

		sfRenderWindow_drawSprite(window, sprite_duck, NULL);
		sfSprite_setTextureRect(sprite_duck, rect);
		sfSprite_setPosition(sprite_duck, pos_duck);

		sfRenderWindow_drawSprite(window, sprite_bar, NULL);
		sfSprite_setPosition(sprite_bar, pos_bar);

		sfRenderWindow_drawSprite(window, sprite_pause_on, NULL);
		sfSprite_setPosition(sprite_pause_on, pos_pause);

		sfRenderWindow_drawSprite(window, sprite_life4, NULL);
		sfSprite_setPosition(sprite_life4, pos_life);

		sfRenderWindow_drawSprite(window, sprite_warren, NULL);
		//sfSprite_setTextureRect(sprite_warren, rect);
		sfSprite_setPosition(sprite_warren, pos_warren);

		sfRenderWindow_drawText(window, score, NULL);
		sfRenderWindow_drawText(window, nbr_score, NULL);

		sfRenderWindow_drawSprite(window, sprite_wallpaper_menu, NULL);
		sfSprite_setPosition(sprite_wallpaper_menu, pos_wallpaper_menu);
		sfRenderWindow_drawSprite(window, sprite_dialogue_warren_1, NULL);
		sfSprite_setPosition(sprite_dialogue_warren_1, pos_dialogue_warren_1);
		if (event.type == sfEvtMouseButtonPressed) {
			sfSprite_destroy(sprite_wallpaper_menu);
			sfTexture_destroy(texture_wallpaper_menu);
			sfSprite_destroy(sprite_dialogue_warren_1);
			sfTexture_destroy(texture_dialogue_warren_1);
		}

		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
	sfText_destroy(score);
	sfText_destroy(nbr_score);
	sfFont_destroy(font);
	sfSprite_destroy(sprite_duck);
	sfSprite_destroy(sprite_wallpaper);
	sfTexture_destroy(texture_duck);
	sfTexture_destroy(texture_wallpaper);
	return (0);
}
