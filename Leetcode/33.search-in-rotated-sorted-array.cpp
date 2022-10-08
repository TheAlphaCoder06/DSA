/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:

    int pivotIndex(vector<int> nums, int s, int e){
        int mid = s + (e - s)/2;
        while(s<e){
            if(nums[mid] >= nums[0])
                return pivotIndex(nums, mid + 1, e);
            else
                return pivotIndex(nums, s, mid);
            mid = s + (e - s)/2;
        }
        return s;
    }

    int binarySearch(vector<int> nums, int s, int e, int t){
        int mid = s + (e - s)/2;
        while(s<=e){
            if(nums[mid] == t)
                return mid;
            else if(nums[mid] > t)
                e = mid - 1;
            else
                s = mid + 1;
            mid = s + (e -s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n - 1;
        int index = pivotIndex(nums, s, e);

        if(target >= nums[index] && target <= nums[n-1])
            return binarySearch(nums, index, n - 1, target);

        else
            return binarySearch(nums, 0, index - 1, target);

    }
};
// @lc code=end

