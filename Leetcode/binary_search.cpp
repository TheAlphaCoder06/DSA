#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int start = 0, end = (nums.size()-1), mid = start + (end-start)/2;
        
        while(start<=end)
        {
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start = (mid + 1);
            else
                end = (mid - 1);
            mid = start + (end - start)/2;
        }
        return -1;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {1,2,4,6,7,8,9};
    int target = 6;

    Solution a;

    int ans = a.search(arr,target);
    cout<<ans;

    return 0;
}