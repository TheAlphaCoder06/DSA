#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int number;
    cin>>number;
    int answer = 0, i = 0;

    while(number!=0)
    {
        int digit=(number % 10);
        if(digit == 1)
            answer = answer + (pow(2,i));
        number = (number / 10);
        i++;
    }

    cout<<answer;

    return 0;
}