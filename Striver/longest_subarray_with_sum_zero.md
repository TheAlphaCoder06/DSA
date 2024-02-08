# [Longest Subarray With Zero Sum](https://www.codingninjas.com/studio/problems/longest-subarray-with-zero-sum_6783450)

## Brute Force Approach


```cpp

// Time Complexity: O(N^2)
// Space Complexity: O(1)

#include<vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int ans = 0;

	for(int i = 0; i < arr.size(); i++) {
		int sum = 0;
		for(int j = i; j < arr.size(); j++) {
			sum += arr[j]; 
			if(sum == 0) {
				ans = max(ans, j - i + 1);
			}
      //little optimization
			int maxZeros = arr.size() - i + 1;
			if(ans == maxZeros) return ans;
		}
	}
	return ans;
}
```

## Better Approach(Using Hashing)

```cpp

// Time Complexity: O(N)
// Space Complexity: O(N)

#include<bits/stdc++.h>>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
    map<int, int> mpp;
	int sum = 0, maxi = 0;

	for(int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		if(sum == 0) {
			maxi = i + 1;
		} else {
			if(mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]); 
            }
            else {
                mpp[sum] = i;
            }
		}
	}
	return maxi;
}

```