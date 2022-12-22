#include <bits/stdc++.h>
using namespace std;
void insertion_sort();
vector<int> vec;
int main()

{

    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    insertion_sort();
    for (int i = 0; i < vec.size(); i++)
    {

        cout << vec[i];
    }
}

void insertion_sort()
{
    int n, key, j;
    n = vec.size();
    for (int i = 1; i < n; i++)
    {
        key = vec[i];
        j = i - 1;

        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}