// #include <stdio.h>

// long linear_search(long[], long, long);

// int main()
// {
//     long array[100], search, c, n, position;

//     printf("Input number of elements in array\n");
//     scanf("%ld", &n);

//     printf("Input %d numbers\n", n);

//     for (c = 0; c < n; c++)
//         scanf("%ld", &array[c]);

//     printf("Input a number to search\n");
//     scanf("%ld", &search);

//     position = linear_search(array, n, search);

//     if (position == -1)
//         printf("%d isn't present in the array.\n", search);
//     else
//         printf("%d is present at location %d.\n", search, position + 1);

//     return 0;
// }

// long linear_search(long a[], long n, long find)
// {
//     long c;

//     for (c = 0; c < n; c++)
//     {
//         if (a[c] == find)
//             return c;
//     }

//     return -1;
// }
// #include <stdio.h>
// void SelSort(int array[], int n);
// int main()
// {
//     int array[100], n, i;
//     printf("Enter number of elementsn");
//     scanf("%d", &n);
//     printf("Enter %d Numbersn", n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &array[i]);
//     SelSort(array, n);
//     return 0;
// }
// void SelSort(int array[], int n)
// {
//     int i, j, position, swap;
//     for (i = 0; i < (n - 1); i++)
//     {
//         position = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (array[position] > array[j])
//                 position = j;
//         }
//         if (position != i)
//         {
//             swap = array[i];
//             array[i] = array[position];
//             array[position] = swap;
//         }
//     }
//     printf("Sorted Array:n");
//     for (i = 0; i < n; i++)
//         printf("%dn", array[i]);
// }
// #include <stdio.h>

// int main()
// {
//     float basic, HRA, PB,gross;

//     printf("Enter basic salary of an employee: ");
//     scanf("%f", &basic);

//     if (basic <= 20000)
//     {
//         HRA= basic * 0.7;
//         PB = basic * 0.15;
//         gross = HRA + PB + basic;
//         printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
//     }
//     else if (basic >= 20001 && basic <= 40000)
//     {
//          HRA= basic * 0.75;
//         PB= basic * 0.18;
//         gross = HRA + PB + basic;

//         printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
//     }

//     else if (basic >= 40001 && basic <= 60000)
//     {
//         HRA = basic * 0.8;
//         PB = basic * 0.2;
//         gross = HRA + PB + basic;

//         printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
//     }

//     else if (basic >= 60001 )
//     {
//         HRA = basic * 0.90;
//         PB = basic * 0.35;
//         gross = HRA + PB + basic;

//         printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
//     }

        
//     }
#include <stdio.h>

    int main()
    {
        float unit, charge_unit;

        scanf("%f", &unit);

        if (unit <= 199)
        {
            charge_unit = unit * 1.20;
        }
        else if (unit >= 200 && unit <= 399)
        {
            charge_unit = unit * 1.50;
        }
        else if (unit >= 400 && unit <= 599)
        {
            charge_unit = unit * 1.80;
        }
        else if (unit > 600)
        {
            charge_unit = unit * 2;
        }

        printf("%f", charge_unit);
    }