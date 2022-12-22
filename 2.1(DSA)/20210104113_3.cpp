#include <bits/stdc++.h>
using namespace std;
void selection_sort();
vector<int> vec;
int main()
{

    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    selection_sort();
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
}

void selection_sort()
{
    int n, min;
    n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {

        min = i;

        for (int j = i + 1; j < n; j++)
        {

            if (vec[j] < vec[min])
            {
                min = j;
            }
        }
        swap(vec[i], vec[min]);
    }
}
