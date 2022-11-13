class Solution {
private:
    void subsets(vector<int> nums, vector<vector<int>>&ans, vector<int>output, int index){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }
        subsets(nums, ans, output, index + 1);
        output.push_back(nums[index]);
        subsets(nums, ans, output, index + 1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>output;
        int index = 0;
        subsets(nums, ans, output, index);
        return ans;
    }
};