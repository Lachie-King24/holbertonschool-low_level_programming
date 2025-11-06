#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - is a structure for name, age and owner of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
