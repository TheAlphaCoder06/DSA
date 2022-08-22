#include <bits/stdc++.h>

using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i = 0; i < size ; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {1,2,3,1,2,4,4};
    int size = 7;

    cout<<findUnique(arr,size);

    return 0;
}