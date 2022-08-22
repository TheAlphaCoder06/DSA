#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int x, bit, number=0;
    cin>>x;
    int i = 0;
    while(x!=0)
    {
        bit = (x&1) ;
        x = (x>>1) ;
        number = number + (bit * pow(10,i));
        i = i + 1;
    }

    cout<<number;

    return 0;
}