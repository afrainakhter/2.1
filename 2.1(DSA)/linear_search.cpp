#include <bits/stdc++.h>
using namespace std;
int bin_search(vector<int> A, int k);

int main()
{

    vector<int> V;
    int x;
    for (int i = 0; i < 10;i++){

        scanf("%d", &x);
        V.push_back(x);

    }
    int k;
    scanf("%d", &k);

    int callfunc = bin_search(V, k);

    if(callfunc==1)
        printf("found");
        else
        printf("not found");
}

    int bin_search(vector<int> A, int k)
    {

        int start, end, mid;
        start = 0;
        end = A.size() - 1;


        while (start<=end)
        {
            mid = (start + end) / 2;
            if(A[mid]==k){

                return 1;
            }

            else if(A[mid]<k)
                start = (mid + 1);
                else
                end = mid - 1;

        }

        return 0;

    }
