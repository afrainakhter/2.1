#include <bits/stdc++.h>
using namespace std;

int arr[10];

int Merge(int low, int mid, int high)
{
    int m = (mid - low + 1);
    int n = (high - mid);
    int L[m + 1];
    int R[n + 1];
    for (int i = 0; i <=( m-1); i++)
    {
        L[i] = arr[low + i];
    }
    for (int j = 0; j <= (n-1); j++)
    {
        R[j] = arr[mid + j + 1];
    }
    L[m + 1] = 9999;
    R[n + 1] = 9999;
    int i = 0;
    int j = 0;
    int k = mid;
    for (int k = 0; k <= (m + n - 1); k++)
    {
        if (L[i] = R[j])
        {
            arr[k] = L[i];
            i = i + 1;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j = j + 1;
            k++;
        }

       
    }
    
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Array:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    Merge(0, 4, 9);
    cout << "Sorted Array:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}