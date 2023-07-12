#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif