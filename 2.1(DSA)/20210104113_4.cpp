#include <bits/stdc++.h>
using namespace std;
void selection_sort();
int bin_search(int k);
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
    int k;
    scanf("%d", &k);

    int callfunc = bin_search(k);

    if (callfunc == 1)
        printf("found");
    else
        printf("not found");
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
int bin_search(int k)
{

    int start, end, mid;
    start = 0;
    end = vec.size() - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (vec[mid] == k)
        {

            return 1;
        }

        else if (vec[mid] < k)
            start = (mid + 1);
        else
            end = mid - 1;
            
       
    }

      

     
    return 0;
}
