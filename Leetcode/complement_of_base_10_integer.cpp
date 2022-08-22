#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int mask = 0;
    int m=n;

    if(n==0){
        return 1;
    }

    while(m!=0)
    {
        mask = (mask << 1) | 1;
        m = (m>>1);
    }

    cout<<((~n)&mask);

    return 0;
}

// Alternate Solution(Better)

//     int bitwiseComplement(int n) {
//         int i = 0, ans = 0;
//         if (n==0) return 1;
//         while (n)
//         {
//             (n&1) == 0 ? ans+=pow(2, i) : ans+=0;
//             n>>=1;
//             i++;
//         }
//         return ans;
// }