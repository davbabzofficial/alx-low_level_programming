#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "dog.h"
/**
* struct dog - Define a new type struct dog
* @name: name of the dog
* @age: how old is the dog is
* @owner: who owns the dog
* Return: Always 0.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif
