#include <bits/stdc++.h> 
using namespace std;

int kadane(vector<int>&temp, int n){
    int currSum = 0, maxSum = 0, negVal = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        currSum += temp[i];
        maxSum = (currSum>maxSum) ? currSum : maxSum;
        if(currSum<0){
            negVal = max(negVal, currSum);
            currSum = 0;
        }
    }
    if(maxSum == 0)
        return negVal;
    return maxSum;
}

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	int maxSum = INT_MIN;
    int sum;
    for(int left = 0; left < m; left++)
    {
        vector<int> v(n, 0);
        for(int right = left; right < m; right++)
        {
            for(int row = 0; row < n; row++)
                v[row] += arr[row][right];
            sum = kadane(v, n);
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int main()
{
    vector<vector<int>> v = {{1, 2, -1, -4, -20},
                            {-8, -3,  4, 2, 1},
                            {3, 8, 10, 1, 3},
                            {-4, -1, 1, 7, -6}};
    int n = 4, m = 5;
    cout<<maxSumRectangle(v, n, m);

    return 0;
}