#include <bits/stdc++.h> 
using namespace std;

int minimumIndex(vector<int> arr, int i, int j){
    if( i == j)
        return i;
    
    int k = minimumIndex(arr, i + 1, j);
    return (arr[i] < arr[k] ? i : k);
}

void recursiveSelectionSort(vector<int>& arr, int n , int index = 0){
    if(index == n)
        return;
    int k = minimumIndex(arr, index, n - 1);
    if(k!=index)
        swap(arr[k], arr[index]);
    recursiveSelectionSort(arr, n, index + 1);
}

void selectionSort(vector<int>& arr, int n)
{   
    recursiveSelectionSort(arr, n);
    
}

int main(){
    vector<int> arr = {24,324,123,435,141,325};
    int n = 6;
    selectionSort(arr, n);

    for(int x:arr)
        cout<<x<<" ";

}