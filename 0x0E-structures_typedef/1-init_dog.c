#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize variable
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
