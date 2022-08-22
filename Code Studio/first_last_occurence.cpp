#include <bits/stdc++.h>

using namespace std;

int first_occurence(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = (n-1);
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = (mid - 1);
        }
        else if(arr[mid]<key)
            start = (mid + 1);
        else if(arr[mid]>key)
            end = (mid - 1);
        mid = start + (end - start)/2;
    }
    return ans;
}

int last_occurence(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = (n-1);
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = (mid + 1);
        }
        else if(arr[mid]<key)
            start = (mid + 1);
        else if(arr[mid]>key)
            end = (mid - 1);
        mid = start + (end - start)/2;
    }
    return ans;
}

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
    pair <int, int> p;
    p.first = first_occurence(arr,n,x);
    p.second = last_occurence(arr,n,x);
    
    return p;
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v = {-10,-5,-5,-5,2};
    int size = 5;
    int target = -5;

    pair<int,int> p = findFirstLastPosition(v,size,target);

    cout<<p.first<<" "<<p.second;

    return 0;
}