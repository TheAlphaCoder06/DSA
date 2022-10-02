#include <bits/stdc++.h>

using namespace std;

bool linearSearch(int arr[], int n, int key){
    if(n<0)
        return -1;
    if(arr[0] == key)
        return true;
    else
        return linearSearch(arr + 1, n-1, key);
}

int main()
{
    int arr[] = {23, 45, 2, 26, 267};
    int n = 5, key = 26;

    cout<<linearSearch(arr, n, key);

    return 0;
}