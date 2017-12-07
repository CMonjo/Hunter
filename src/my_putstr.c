/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Display one by one a characters of string
*/

#include "hunter.h"

int my_putstr(char const *str)
{
	int var = 0;

	while (str[var] != '\0') {
		my_putchar(str[var]);
		var = var + 1;
	}
	return (0);
}
