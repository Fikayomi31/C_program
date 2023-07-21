#include <stdio.h>

void BubbleSort(int *A, int n)
{
    int i,j,temp;

    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
        {
            if (A[j] < A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
}

int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4};
    BubbleSort(A, 6);
    for (i = 0; i < 6; i++)
        printf("%d\n", A[i]);
}