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
            maxSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int arr[] = {1, -2, -3, 4, -1, 2, 1};
    int n = 7;
    
    cout<<maxSubarraySum(arr,n)<<endl;
    
    return 0;
}