

// /*
// Afrain Akhter
// 20210103113
// */

// #include <bits/stdc++.h>
// using namespace std;

// int linear_search( vector<int>vec, int h, int search_value);
// int main()
// {

//    int  h, search_value, callfunc;
//    vector<int> vec;

//    for (int j = 0; j < 5; j++)
//    { // in line coding

//        cin >> h;
//        vec.push_back(h);
//    }

//     cin >> search_value;
//     callfunc = linear_search(vec, h, search_value);

//     if (callfunc == -1)
//         printf("%d  is not present", search_value);
//     else
//         printf("%d  is  present", search_value, callfunc + 1);
// }

// int linear_search(vector<int> vec, int h, int search_value)
// {

//     for (int i = 0; i < h; i++)
//     {

//         if (search_value == vec[i])
//         {
//             return i;
//         }

//     }
//     return -1;
// }
#include<bits/stdc++.h>
using namespace std;
int A[5];
int Partition(int low, int hi)
{
    int pivot,i,j;
    pivot = A[low];
    i = low;
    j = hi;

    while (i<j)
    {
        while(A[i]<= pivot)
        {
            i++;
        }
        while(A[j]> pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(A[i],A[j]);
        }
    }
    swap (A[low],A[j]);
    return j;
}
void Quick_Sort(int low , int hi)
{
    int position;
    if (low<hi)
    {
        position = Partition(low,hi);
        Quick_Sort(low,position);
        Quick_Sort(position+1,hi);
    }cout<<"\n";
}
int main()
{
    cout<<"Enter the elements of array";
    for (int i =0;i<5;i++)
    {
        cin>>A[i];
    }
    for (int i =0;i<5;i++)
    {
        cout<<A[i]<<"\t";
    }
    A[5] = 99999;

    Quick_Sort(0,5);
    cout<<"\n";
    cout<<"Sorted array";
    cout<<"\n";
    for (int i =0;i<6;i++)
    {
        cout<<A[i]<<"\t";
    }
}