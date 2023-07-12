#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};
int main(void)
{
    struct User user;
    struct User *ptr;
    
    ptr = &user;
    (*ptr).name = "FOO BAR";
    ptr->email ="email@emaple";
    printf("Name: %s\n", (*ptr).name);
    printf("Email: %s\n", ptr->email);
    return (0);
    
}