#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x;
    cin >> x;
    int ans = 0;
    while (x != 0)
    {
        int digit = (x % 10);
        if ((ans > (INT_MAX / 10)) or (ans < (INT_MIN / 10)))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x /= 10;
    }

    cout << ans;

    return 0;
}

//? (ans * 10) > INT_MAX and ans < (INT_MIN) are two different expressions here.