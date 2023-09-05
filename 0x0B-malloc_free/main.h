#ifndef MAIN_H
#define MAIN_H
/**
 * main.h
 * Author: YovsefMo
 * For: 0x0B-malloc_free
*/
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
#endif /* MAIN_H */
