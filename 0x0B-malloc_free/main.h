#ifndef MAIN_H
#define MAIN_H

char *creat_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstrostr(int ac, char **av);
int _strlen(char *c);

#endif /* MAIN_H */