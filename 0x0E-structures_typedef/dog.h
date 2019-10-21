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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
