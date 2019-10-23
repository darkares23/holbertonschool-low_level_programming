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
	dog_t *newDog;
	char *new_name, *new_owner;
	int i, j, copy;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; i < name[i]; i++)
	;
	for (j = 0; j < owner[j]; j++)
	;
	new_name = malloc(i + 1);
	if (new_name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	new_owner = malloc(j + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(newDog);
		return (NULL);
	}
	for (copy = 0; copy <= i; copy++)
	{
		new_name[copy] = name[copy];
	}
	for (copy = 0; copy <= j; copy++)
	{
		new_owner[copy] = owner[copy];
	}

	newDog->name = new_name;
	newDog->age = age;
	newDog->owner = new_owner;
	return (newDog);
}
