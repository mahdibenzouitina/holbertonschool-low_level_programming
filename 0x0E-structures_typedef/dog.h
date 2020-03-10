#ifndef dog_h
#define dog_h
/**
 * struct dog - dog id
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
