#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:

        bool isNotPresent(int arr[], int size, int key)
        {
            for (int i = 0; i < (size-1); i++)
            {
                if(arr[i] == key)
                    return true;
            }
            return false;
        }
    
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {123,412,32,3,2252,24,234,234};
    int size = 8;

    int key;
    cin>>key;

    Solution a;

    if(a.isNotPresent(arr,size,key))
        cout<<"The element is present in the array";

    else
        cout<<"The element is not present in the array";

    return 0;
}