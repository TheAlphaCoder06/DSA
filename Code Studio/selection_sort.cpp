#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSort(arr,n);

    for(auto x:arr)
        cout<<x<<" ";

    return 0;
}