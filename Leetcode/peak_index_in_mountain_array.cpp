#include <bits/stdc++.h>

using namespace std;

class Solution 
{
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int start = 0, end = (arr.size() - 1);
                int mid = start + (end - start)/2;
                while(start<end)
                {
                    if( arr[mid]<arr[mid+1] )
                    {
                        start = mid + 1;
                    }
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

    vector<int> arr = {1, 2, 4, 2, 1};
    Solution a;
    cout<<a.peakIndexInMountainArray(arr);

    return 0;
}