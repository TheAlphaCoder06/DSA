#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int pageSum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum = pageSum + arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m or arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
    if (n < m) return false;
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int answer = 0;
    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}   

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {48,90};
    int n = 4, m = 2;

    cout<<allocateBooks(arr, n, m);            

    return 0;
}