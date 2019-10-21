#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - function to init a variable of type dog
* @name: dogs name
* @age: dogs age
* @owner: owner name
* Return: newDog or null
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
