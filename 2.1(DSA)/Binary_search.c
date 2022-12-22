
#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int n, int x);

int main()
{
    int A[20], n, x, position;
    scanf("%d", &n);
    for (int i = 0; i < n;i++)
        scanf("%d", &A[n]);
    scanf("%d", &x);
    position = binary_search(A, n, x);
    if(position==-1)
        printf("%d is in not array", x);
        else
            printf("%d is  in array", x);
        return 0;
}
int binary_search(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;
    while(left<=right){
        mid = (left + right) / 2;
        if (A[mid] == x)
        {

            return mid;
        }
        if(A[mid]<x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        return -1;
    }
}