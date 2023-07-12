#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};
int main(void)
{
    struct date today;
    today.month = 9;
    today.day = 06;
    today.year = 3024;

    printf("Today date is %i-%i-%.2i\n", today.day, today.month,today.year);
    return (0);
}