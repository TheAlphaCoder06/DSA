#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:

        void reverseArray(int arr[], int size)
        {
            int start = 0 , end = (size - 1);

            while (start<=end)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {234,2345,235,345,3452,5};
    int size = 6;

    Solution a;
    a.reverseArray(arr, size);

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}