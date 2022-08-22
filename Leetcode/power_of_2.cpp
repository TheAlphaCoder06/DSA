#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:

        bool isPowerOfTwo(int n)
        {
            int m = n;
            int i = 0;
            if(n==0)
                return false;
            while(m)
            {
                if((m&1)==1)
                {
                    i++;
                    if(i>1)
                        return false;
                }
                m >>= 1;
            }
            return true;
        }
};

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    
    Solution a;

    cout<<std::boolalpha<<a.isPowerOfTwo(n);

    return 0;
}

// Alternate Methods

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n <= 0) return false;
//         return ceil(log2(n)) == floor(log2(n));
//     }
// };


// class Solution
// {
//     public:

//         bool isPowerOfTwo(int n)
//         {
//             if(n<=0)
//                 return false;
//             return ((n&(n-1))==0);
//         }
// }