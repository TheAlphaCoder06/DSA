#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int noOfSetBits(int a)
        {
            int i = 0;
            while (a)
            {
                if((a&1)==1)
                    i++; 
                a >>= 1;   
            }
            return i;
        }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x, y;
    cin>>x>>y;

    Solution z;
    int ans1 = z.noOfSetBits(x);
    int ans2 = z.noOfSetBits(y);

    cout<<(ans1 + ans2);

    return 0;
}