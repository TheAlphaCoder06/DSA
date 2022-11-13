#include <bits/stdc++.h>

using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s], count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if( arr[i] <= pivot)
            count++;
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while( i<pivotIndex && j >pivotIndex){
        if(arr[i] < pivot)
            i++;
        if(arr[j] > pivot)
            j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}


void quickSort(int *arr, int s, int e){
    // base case
    if(s>e){
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){

    int arr[] = {3, 5, 1, 8, 2, 4};
    int s = 0, e = 5;

    quickSort(arr, s, e);

    for(int x: arr)
        cout<<x<<" ";

    return 0;
}