#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to initialize dog
 * @d: pointer
 * @name: dog name
 * @age: how old dog is
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
