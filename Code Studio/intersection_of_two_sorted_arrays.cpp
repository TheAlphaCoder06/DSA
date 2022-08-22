#include <bits/stdc++.h>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    
    int i = 0, j = 0;
    while((i<n) and (j<m))
    {
        if(arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
          
        else if(arr1[i] > arr2[j])
            j++;
        else
            i++;
    }
          return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr1 = {1,2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    int n = 6, m = 4;

    vector<int> ans = findArrayIntersection(arr1,n,arr2,m);

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}