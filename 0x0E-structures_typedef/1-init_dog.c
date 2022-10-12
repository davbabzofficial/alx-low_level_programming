#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* init_dog - function
* struct dog - struct type
* @d: memory address
* @name: name
* @age: dog age
* @owner: dog owner
* Return - 0 on success
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
