#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - function to init a variable of type dog
* @d: variable to init
* @name: dogs name
* @age: dogs age
* @owner: owner name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
