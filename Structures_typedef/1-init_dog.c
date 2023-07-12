#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: name of the struct dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* check if d is NULL */
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;

}