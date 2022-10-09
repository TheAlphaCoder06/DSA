#include <bits/stdc++.h> 
using namespace std;

void insertionSortRecursive(int n, vector<int>& arr)
{
    if (n <= 1)
        return;

    insertionSortRecursive(n - 1, arr);

    int last = arr[n-1];
    int j = n-2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main(){
    vector<int> arr {2324,2,235,546,145,3461};
    int n = arr.size();
    insertionSortRecursive(n , arr);
    for(int x:arr)
        cout<<x<<" ";
}