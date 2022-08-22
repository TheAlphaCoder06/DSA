#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int start, int end, int k)
{
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        if( arr[mid] == k)
        {
            ans = mid;
            return ans;
        }
        else if( arr[mid] < k)
            start = (mid + 1);
        else    
            end = (mid - 1);

        mid = start + (end - start)/2;
    }
    return ans;
}

int pivotIndex(vector<int>& arr)
{
    int start = 0;
            int end = (arr.size() - 1);
            int mid = start + (end - start)/2;

            while(start<end)
            {
                if(arr[mid] >= arr[0])
                    start = (mid + 1);
                else
                    end = mid;

                mid = start + (end - start)/2;
            }        
            return start;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = pivotIndex(arr);

    if( (arr[pivot] <= k) and (arr[n-1] >= k))
        return binarySearch(arr,pivot,(n-1),k);
    else
        return binarySearch(arr,0,pivot-1,k);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {4, 5, 7, 8, 1, 2, 3};
    int n = 5, k = 8;

    cout<<findPosition(arr,n,k);    

    return 0;
}