#include <stdio.h>

int Add(int a, int b)
{
    return (a + b);
}
void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}

int main(void)
{
    int (*p)(int, int);
    int c;

    p = &Add;
    c = (*p)(2, 3);
    printf("%d\n", c);
    void (*ptr)(char *);
    ptr = PrintHello;
    ptr("Tom");
}