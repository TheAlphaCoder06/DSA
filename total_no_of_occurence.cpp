#include <bits/stdc++.h>

using namespace std;

int first_half(vector<int> arr, int n,int key)
{
    int start = 0;
    int end = (n - 1);
    int mid = start + (end - start)/2;
    int ans = 0;

    if(arr[mid] == key)
        ans = -1;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans++;
            end = (mid - 1);
        }
        else if(arr[mid]<key)
            start = (mid + 1);
        else    
            end = (mid - 1);

        mid = start + (end - start)/2;
    }
    return ans;
}
int second_half(vector<int> arr, int n,int key)
{
    int start = 0;
    int end = (n - 1);
    int mid = start + (end - start)/2;
    int ans = 0;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans++;
            start = (mid + 1);
        }
        else if(arr[mid]<key)
            start = (mid + 1);
        else    
            end = (mid - 1);

        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v = {-10,-4,-4,-4,-4};
    int size = 5;
    int target = -4;

    int ans1 = first_half(v,size,target);
    int ans2 = second_half(v,size,target);

    cout<<(ans1 + ans2);

    return 0;
}