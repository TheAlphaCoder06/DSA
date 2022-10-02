#include <bits/stdc++.h>

using namespace std;

int sumArray(int arr[], int n){
    if(n<=0)
        return 0;
    
    // return sumArray(arr, n - 1) + arr[n - 1];
    return sumArray(arr + 1, n - 1) + arr[0];
}

int main()
{

    int arr[] = {1,2,3,4,5};
    int n = 5;

    cout<<sumArray(arr, n);

    return 0;
}