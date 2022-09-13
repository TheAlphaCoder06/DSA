#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = (m-1), j = (n-1), tar = (m+n-1);
        while(j>=0){
            i>=0 && nums1[i]>nums2[j] ? nums1[tar--] = nums1[i--] : nums1[tar--] = nums2[j--];
        }
    }

};


int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    vector <int> nums1{1,3,5,7,0,0,0,0};
    vector <int> nums2{2,4,6,8};

    int m = nums1.size();
    int n = nums2.size();

    Solution sol;
    sol.merge(nums1, m, nums2, n);
  
    return 0;
}