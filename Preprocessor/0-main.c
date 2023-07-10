#include <stdio.h>
#include "0-object_like_macro.h"

/**
 * main - check the code
 * 
 * Return: Always 0
*/
int main(void)
{
    int s, i;
    int num[] = {NUMBERS};
    int n;

    s = 98 + SIZE;
    i = SIZE + BUFFER_SIZE;
    printf("%d\n", s);
    printf("%d\n", i);
    printf("%d\n", num[2]);
    n = min(s, i);
    printf("The minimu, value between %d and %d is: %d\n", s, i, n);
    return (0);
}