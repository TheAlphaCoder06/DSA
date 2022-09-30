#include <bits/stdc++.h>

using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long currentSum = 0, maxSum = -1;
    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[] {-3, -5, -6};
    // int arr[] {1, 2, 7, -4, 3, 2, -10, 9, 1};

    int n = 3;

    cout<<maxSubarraySum(arr, n);

    return 0;
}