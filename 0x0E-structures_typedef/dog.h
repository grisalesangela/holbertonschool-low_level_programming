#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to identify a dog
 * @name: type char, dog's name
 * @age: type float, dog'w age
 * @owner: type char, dog's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

/**
 * prototypes - prototypes for functions
 * @d: pointer to dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char owner);
void free_dog(dog_t *d);

#endif
