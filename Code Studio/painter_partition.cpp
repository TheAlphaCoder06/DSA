#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> boards, int k, int mid)
{
    int painterCount = 1;
    int totalTime = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        if (totalTime + boards[i] <= mid)
        {
            totalTime += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k or boards[i] > mid)
            {
                return false;
            }
            totalTime = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
     int start = 0;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        sum += boards[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int answer = 0;
    while (start <= end)
    {
        if (isPossible(boards, k, mid))
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

    cout<<findLargestMinDistance(arr,m);

    return 0;
}