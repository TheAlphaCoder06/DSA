#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    if(s>e)
        return false;
    int mid = s + (e - s)/2;
    if(arr[mid] == key)
        return true;
    else if(arr[mid] < key)
        return binarySearch(arr,mid + 1, e, key);
    else
        return binarySearch(arr, s, mid - 1, key);
}

int main(){

    int arr[] = {2,4,7,9,13,34};
    int n = 6;

    int s = 0, e = n - 1, key = 13;

    cout<<binarySearch(arr, s, e, key);

    return 0;
}