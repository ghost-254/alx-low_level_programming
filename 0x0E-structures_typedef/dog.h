#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Task 1 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Task 2 */
void print_dog(struct dog *d);

/* Task 4 */
dog_t *new_dog(char *name, float age, char *owner);

/* Task 5 */
void free_dog(dog_t *d);

#endif /* DOG_H */
