#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int no_100 = 0, no_50 = 0, no_20 = 0, no_1 = 0;

    switch(n >=100)
	{
		case 1:
			no_100 = n/100;
        	n -= no_100 * 100;
        break;
	}
	switch(n >=50)
	{
		case 1:
			no_50 = n/50;
        	n -= no_50 * 50;
	}
	switch(n >=20)
	{
		case 1:
			no_20 = n/20;
        	n -= no_20 * 20;
        break;
	}
	switch(n >=1)
	{
		case 1:
			no_1 = n;
        break;
	}

    cout<<no_100<<" "<<no_50<<" "<<no_20<<" "<<no_1;

    return 0;
}