#include <bits/stdc++.h>

using namespace std;

long long int sqrtInteger(int n)
{
    int start = 0;
    int end = n ;
    long long int mid = start + (end - start) / 2;
    long long int answer =0;
    while (start <= end)
    {
        long long int square = mid*mid;
        if(square == n)
        {
            return mid;
        }
        if (square < n)
        {
            answer = mid;
            start = mid + 1;
        }
        if(square>n)
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return answer;
}

class Solution
{
public:
    int mySqrt(int x)
    {
        int answer = sqrtInteger(x);
        return answer;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    Solution a;

    cout<<a.mySqrt(n);

    return 0;
}