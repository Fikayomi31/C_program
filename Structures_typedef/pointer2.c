#include <stdio.h>
#include <stdlib.h>

/**
 * struct User - Structure name User
 * @name: name of the User
 * @email: email of the User
 * @age: age of the User
 * 
*/
struct User
{
    char *name;
    char *email;
    int age;
};

/**
 * new_user - function of the struct
 * @name: nameof the function
 * @email: email of the function
 * @age: age of the function
*/
struct User *new_user(char *name, char *email, int age)
{
    struct User *user;
    user = malloc(sizeof(struct User));
    if (user == NULL)
        return (NULL);
    user->name = name;
    user->email = email;
    user->age = age;
    return (user);
}

/**
 * main - check the code
 * 
 * Return: Always 0
*/
int main(void)
{
    struct User *user;
    user = new_user("FOO DOO", "Foodoo@example", 32);
    if (user == NULL)
        return (1);
    printf("User %s created !\n", user->name);
    printf("His email %s", user->email);
    printf("And he is %d years old\n", user->age);
    
    return (0);
}
