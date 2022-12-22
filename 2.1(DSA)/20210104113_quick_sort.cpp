#include <bits/stdc++.h>
using namespace std;
int A[5];
int Partition(int low, int hi)
{
    int pivot, i, j;
    pivot = A[low];
    i = low;
    j = hi;

    while (i < j)
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    }
    swap(A[low], A[j]);
    return j;
}
void Quick_Sort(int low, int hi)
{
    int position;
    if (low < hi)
    {
        position = Partition(low, hi);
        Quick_Sort(low, position);
        Quick_Sort(position + 1, hi);
    }
    cout << "\n";
}
int main()
{
    cout << "Enter the elements of array";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";
    }
    A[5] = 99999;

    Quick_Sort(0, 5);
    cout << "\n";
    cout << "Sorted array";
    cout << "\n";
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "\t";
    }
}