#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - new type struct created
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Description: a dog struct created
*/
struct dog
{
    char *name;
    char *owner;
    float age;
};

/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif