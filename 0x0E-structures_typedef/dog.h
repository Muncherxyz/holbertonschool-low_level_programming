#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog properties
 * @name: dogs name
 * @owner: dogs owner
 * @age: dogs age
 *
 */
struct dog
{
char *name, *owner;
float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
