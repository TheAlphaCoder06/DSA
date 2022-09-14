#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i = 0, j = 1, n = nums.size();
        while(j<n){
            if(nums[i]==0 and nums[j]!=0)
                swap(nums[i++],nums[j++]);
            else if(nums[j]==0 and nums[i]!=0){
                i++;
                j++;
            }
            else if(nums[j]!=0 and nums[i]!=0){
                i++;
                j++;
            }
            else
                j++;
        }
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    vector<int> nums{1,0,2,3,0,12};

    Solution obj;
    obj.moveZeroes(nums);
    

    return 0;
}