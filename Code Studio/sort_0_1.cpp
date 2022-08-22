#include <bits/stdc++.h>

using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int l = 0, r = (size-1);
    
    while(l<r)
    {
        while((input[l]==0) and (l<r)){
            l++;
        }
        while((input[r]==1) and (l<r)){
            r--;
        }
        if(l<r)
        {
            swap(input[l], input[r]);
            l++;
            r--;
        }
    }
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {0,0,1,1,0,1,0,1};
    int size = 8;
    sortZeroesAndOne(arr,size);

    for(auto x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}