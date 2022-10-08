//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    bool isPossible(int arr[], int n, int k, int mid){
        unsigned long long timeSum = 0, painterCount = 1;
        for(int i = 0; i < n; i++){
            if(timeSum + arr[i] <= mid){
                timeSum += arr[i];
            }
            else{
                painterCount++;
                if(painterCount > k || arr[i] > mid)
                    return false;
                timeSum = arr[i];
            }
        }
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        unsigned long long start = 0, sum = 0;
        for(int i = 0; i < n; i++)
            sum += arr[i];
        unsigned long long end = sum;
        unsigned long long ans = 0;
        unsigned long long mid = start + (end - start)/2;
        while(start<=end){
            if(isPossible(arr, n, k, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends