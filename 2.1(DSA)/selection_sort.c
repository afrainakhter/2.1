#include<stdio.h>
void selection_sort(int A[], int n);
int main()
{
    int A[20],n,i;
        scanf("%d", &n);
    for ( i = 0; i < n;i++)
        scanf("%d", &A[i]);
    selection_sort(A, n);
    return 0;
}

void selection_sort(int A[], int n){
    int i, j, index_min, temp;
    for (i = 0; i < (n - 1);i++){
        index_min = i;
        for (j = i + 1; j < n;j++){
            if(A[j]<A[index_min])
                  index_min = j;
        }
        
        if(index_min !=i){
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }}
        printf("Sorted Array:");
        for (i = 0; i < n; i++)
            printf("%d", A[i]);
}

