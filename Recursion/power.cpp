#include <bits/stdc++.h>

using namespace std;

long long power(int a, int b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans = power(a, b/2);
    if(!(b&1))
        return ans * ans;
    else
        return a*ans*ans;

}

int main()
{
    int a = 2, b = 10;
    cout<<power(a, b);

    return 0;
}

//! Leetcode 50.Pow(n,x)
// class Solution {
// public:
//     double myPow(double x, int n) {
//         if(n==0)
//             return 1;
//         if(n==1)
//             return x;
//         if(n==-1)
//             return (1/x);
//         double ans = myPow(x, n/2);
//         if( !(n&1) )
//             return ans*ans;
//         else if( n<0 and (n&1))
//             return (1/x)*ans*ans;
//         else
//             return x*ans*ans;
//     }
// };