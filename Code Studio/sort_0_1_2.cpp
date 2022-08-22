#include <bits/stdc++.h>

using namespace std;

void sort012(int arr[], int n)
{
    int low = 0, mid = 0, high = (n-1);
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:swap( arr[mid++],arr[low++]);
                break;
            case 1:mid++;
                break;
            case 2:swap(arr[mid],arr[high--]);
                break;
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {0,0,1,2,0,2,1,0,2};
    int size = 9;
    sort012(arr,size);

    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}