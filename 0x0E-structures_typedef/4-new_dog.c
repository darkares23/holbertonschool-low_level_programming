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
	char *new_name, *new_owner;
	int i, j, copy;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; i < name[i]; i++)
	;
	for (j = 0; j < owner[j]; j++)
	;
	new_name = malloc(i * sizeof(char));
	if (new_name == NULL)
	{
		return (NULL);
		free(name);
	}
	new_owner = malloc(j * sizeof(char));
	if (new_name == NULL)
	{
		return (NULL);
		free(owner);
	}
	for (copy = 0; copy <= i; copy++)
	{
		new_name[copy] = name[copy];
	}
	for (copy = 0; copy <= i; copy++)
	{
		new_owner[copy] = owner[copy];
	}

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
