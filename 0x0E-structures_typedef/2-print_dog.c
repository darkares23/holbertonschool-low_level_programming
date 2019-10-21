#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - function to init a variable of type dog
* @d: variable to init
* @name: dogs name
* @age: dogs age
* @owner: owner name
*/

void print_dog(struct dog *d)
{	
	if (d == NULL)
		;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);	
	
}
