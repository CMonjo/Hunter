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
	sfVideoMode mode = {1980, 1080, 32};
	sfRenderWindow* window;
	sfEvent event;
	sfIntRect rect = {0, 0, 110, 110};

	//TEXT
	sfFont *font = sfFont_createFromFile("src/font/arial.ttf");

	sfVector2f pos_score = {50, 800};
	sfText *score = set_text("Score", pos_score, font, 50);

	sfVector2f pos_nbr_score = {50, 850};
	sfText *nbr_score = set_text("000", pos_nbr_score, font, 50);

	sfVector2f pos_hp = {1720, 800};
	sfText *hp = set_text("HP", pos_hp, font, 50);

	sfVector2f pos_nbr_hp = {1720, 850};
	sfText *nbr_hp = set_text("25", pos_nbr_hp, font, 50);

	//TEXTURES
	sfSprite *sprite_duck = sfSprite_create();
	sfTexture *texture_duck = sfTexture_createFromFile("src/img/spritesheet.png", NULL);
	sfSprite_setTexture(sprite_duck, texture_duck, sfTrue);

	sfSprite *sprite_wallpaper = sfSprite_create();
	sfTexture *texture_wallpaper = sfTexture_createFromFile("src/img/wallpaper.jpg", NULL);
	sfSprite_setTexture(sprite_wallpaper, texture_wallpaper, sfTrue);
	sfVector2f pos_duck = {0, 0};

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
		sfRenderWindow_drawSprite(window, sprite_wallpaper, NULL);
		sfRenderWindow_drawSprite(window, sprite_duck, NULL);
		sfSprite_setTextureRect(sprite_duck, rect);
		sfSprite_setPosition(sprite_duck, pos_duck);

		sfRenderWindow_drawText(window, score, NULL);
		sfRenderWindow_drawText(window, nbr_score, NULL);
		sfRenderWindow_drawText(window, hp, NULL);
		sfRenderWindow_drawText(window, nbr_hp, NULL);

		sfRenderWindow_display(window);
		if (seconds > 0.5) {
			move_rect(&rect, 110, 330);
			sfClock_restart(clock);
		}
	}
	sfRenderWindow_destroy(window);
	sfText_destroy(score);
	sfText_destroy(nbr_score);
	sfText_destroy(hp);
	sfText_destroy(nbr_hp);
	sfFont_destroy(font);
	sfSprite_destroy(sprite_duck);
	sfSprite_destroy(sprite_wallpaper);
	sfTexture_destroy(texture_duck);
	sfTexture_destroy(texture_wallpaper);
	return (0);
}
