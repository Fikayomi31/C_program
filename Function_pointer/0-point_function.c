#include <stdio.h>

void A()
{
    printf("Hello");
}

void B(void (*ptr)()) // function pointer as agrument
{
    ptr(); // callback function that ptr point to

}
int main()
{
   // void (*p)() = A;
    // B(p);
    B(A);

}