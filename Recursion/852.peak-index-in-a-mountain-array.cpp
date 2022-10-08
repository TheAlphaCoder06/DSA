/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:

    int peakIndex(vector <int> &arr, int s, int e){
        int mid = s + (e - s)/2;
        while(s<e){
            if(arr[mid] < arr[mid + 1])
                return peakIndex(arr, mid + 1, e);
            else
                return peakIndex(arr, s, mid);
            mid = s + (e - s)/2;
        }
        return s;
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        return peakIndex(arr, 0, arr.size() - 1);
    }
};
// @lc code=end

