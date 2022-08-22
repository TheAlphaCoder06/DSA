#include <bits/stdc++.h>

using namespace std;

int findDuplicates(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = (ans ^ arr[i]);
    }
    for (int i = 1; i < size; i++)
    {
        ans = (ans ^ i);
    }
    
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {1,3,4,2,2};
    int size = 5;

    cout<<findDuplicates(arr, size);

    return 0;
}

//Code Studio solution

// int findDuplicate(vector<int> &arr, int n){
// 	sort(arr.begin(), arr.end());
//     int ans = 0;
//     for(int i = 0; i < arr.size(); i++)
//     {
//         ans = (arr[i] ^ arr[i+1]);
//         if(ans == 0)
//             return arr[i];
//         ans = 0;
//     }
// }
