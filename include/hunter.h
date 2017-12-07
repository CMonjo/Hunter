/*
** EPITECH PROJECT, 2017
** CSFML MyHunter
** File description:
** Bootstrap
*/


#ifndef HUNTER_H_
#define HUNTER_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
int main(int ac, char **av);
int my_putstr(char const *str);
void my_putchar(char c);
void my_destroy(win_t *sys);
void hitbox_pata(win_t *sys);
void hitbox_warren(win_t *sys);
void hitbox_woman_1(win_t *sys);
void hitbox_woman_2(win_t *sys);
void analyse_events(win_t *sys);
void init_sprite_system_second(win_t *sys);
void my_end_story(win_t *sys);
void init_sprite_dial(win_t *sys);
void init_sprite_system(win_t *sys);
void init_rect(win_t *sys);
void init_rect_second(win_t *sys);
void init_sprite_chracters(win_t *sys);
void my_clock(win_t *sys);
void sfrender_chracters(win_t *sys);
void sfrender_system(win_t *sys);
void sfrender_HUD(win_t *sys);
void init_window(win_t *sys);
void move_spirte_pata(win_t *sys);
void move_spirte_warren(win_t *sys);
void move_spirte_woman_1(win_t *sys);
void move_spirte_woman_2(win_t *sys);
void my_life_first(win_t *sys);
void my_life_second(win_t *sys);
void my_life_third(win_t *sys);
#endif
