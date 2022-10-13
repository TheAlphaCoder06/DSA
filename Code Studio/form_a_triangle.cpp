#include <bits/stdc++.h> 
using namespace std;

bool possibleToMakeTriangle(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size() - 2; i++){
        if(arr[i] + arr[i + 1] > arr[i + 2])
            return true;
    }
    return false;
}

int main()
{

    vector<int> arr = {4, 3, 2, 1};
    cout<<possibleToMakeTriangle(arr);

    return 0;
}