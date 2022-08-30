#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr , int m)
{
    int s = (m + 1), e = arr.size()-1;
    while(s<e){
        swap(arr[s++], arr[e--]);
    }
}

int main()
{
    vector <int> arr = {2, 3, 4, 5, 6, 7};
    int m = 2;

    reverseArray(arr,m);

    for(int x:arr)
        cout<<x<<" ";

    return 0;
}