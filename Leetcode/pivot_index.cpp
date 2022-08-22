#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
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
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {9, 1, 2, 3};

    Solution a;

    cout<<a.pivotIndex(arr);    

    return 0;
}