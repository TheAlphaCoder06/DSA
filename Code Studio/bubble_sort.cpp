#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        
    }
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {4356,234,56,234,4356,2354};
    bubbleSort(arr);

    for(int x:arr)
        cout<<x<<" ";

    return 0;
}