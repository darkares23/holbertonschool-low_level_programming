#ifndef DOG
#define DOG
/**
 * struct dog - new structure of a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
