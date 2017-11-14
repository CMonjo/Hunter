/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct declaration file
*/

#ifndef STRUCT_H_
	#define STRUCT_H_
	typedef struct framebuffer {
		unsigned int width;
		unsigned int height;
		sfUint8 *pixels;
	}framebuffer_t;
#endif
