#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> stalls, int m, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == m)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = stalls[stalls.size() - 1];
    int answer = 0;
    int end = maxi;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
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

    vector<int> arr = {0,3,4,7,10,9};
    int k = 4;

    cout<<aggressiveCows(arr,k);

    return 0;
}