#include <stdio.h>
int linear_search(int A[], int n, int x);
int main()
{

    int A[20], n, x, callfunc;
    printf("Enter length:");
    scanf("%d", &n);
    printf("Enter elements:");
    for (int j = 1; j < n; j++)
        scanf("%d", &A[j]);
    printf("Enter Desire No:");
    scanf("%d", &x);
    callfunc = linear_search(A, n, x);
    if (callfunc == -1)

        printf("%d not present in array", x);

    else

        printf("%d present in the array", x, callfunc + 1);
    return 0;
}

int linear_search(int A[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] == x)

            return i;
    }

    return -1;
}