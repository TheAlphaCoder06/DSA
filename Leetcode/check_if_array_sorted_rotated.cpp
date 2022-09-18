#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                count++;
            }
        }
        if (nums[0] < nums[n - 1])
        {
            count++;
        }
        return count <= 1;
    }
};

int main()
{
    vector<int> nums = {5, 6, 7, 1, 2, 3, 4};

    Solution obj;
    cout << ::boolalpha << obj.check(nums);
}
