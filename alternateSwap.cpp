#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        void alternateSwap(int arr[], int size)
        {
            for (int i = 0; i < (size); i+=2)
            {
                if((i+1)<size)
                    swap(arr[i], arr[i+1]);
            }
            
        }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {22,454,3,4,56,353};
    int size = 6;

    Solution s;
    s.alternateSwap(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}