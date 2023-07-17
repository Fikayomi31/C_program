#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function to get length of a string
 * @s: the string
 * 
 * Return: The length of the string
*/
int _strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

/**
 * _strcpy - copy string to anther char
 * @dest: destination string
 * @src: source string
 * 
 * Return: destination string copy
*/
char *_strcpy(char *dest, char *src)
{
    strcpy(dest, src);
    return (dest);
}

/**
 * new_dog - function to create a new function
 * @name: name of the new_dog
 * @age: age of the new_dog
 * @owner: owner of the new_dog 
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    int len_name, len_owner;

    /* length of name and owner */
    len_name = _strlen(name);
    len_owner = _strlen(owner);

    /* Allocate memory to dog object */
    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    /* Allocate memory to the d_name */
    d->name = malloc(sizeof(char) * (len_name + 1));
    
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    /* Allocate memory to the d->owner */
    d->owner = malloc(sizeof(char) * (len_owner + 1));
    
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }
    
   

    /* _strcpy string for owner and name*/
    _strcpy(d->name, name);
    _strcpy(d->owner, owner);
     d->age = age;

     return (d);
}
