#include <bits/stdc++.h>

using namespace std;

void intersection(int input1[], int input2[], int size1, int size2)
{
    int i = 0, j = 0;
    
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(input1[i]==input2[j])
            {
                cout<<input1[i]<<" ";
                input2[j] = -1;
                break;
                   
            }
        }
    }
    cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr1[] = {10,10};
    int size1 = 2;
    int arr2[] = {10};
    int size2 = 1;

    intersection(arr1,arr2,size1,size2);

    return 0;
}