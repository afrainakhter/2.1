#include <bits/stdc++.h>
using namespace std;
int Search_min(vector<int> V);

int main()
{
    vector<int> v1;
    int x;
    int callfunc;

    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &x);
        v1.push_back(x);
        
       
    }
    callfunc = Search_min(v1);
    cout << callfunc;
}

int Search_min(vector<int> V)
{
    vector<int> vec;
    int n = vec.size();
    int min = 0;
    for (int j = 1; j < n; j++)
    {

        if (vec[min] > vec[j])
        {

            min = j;
        }
    }

    return min;
}