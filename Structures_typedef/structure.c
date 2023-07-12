#include <stdio.h>
#include <stdlib.h>
struct User
{
    char *name;
    char *email;
    int age;

};

int main(void)
{
    struct User user;
    user.name = "John Doe";
    user.email = "johndoe@gmail.com";
    user.age = 24;

    printf("Nam: %s\n", user.name);
    printf("Email: %s\n", user.email);
    printf("Age: %d\n", user.age);
    return (0);
}