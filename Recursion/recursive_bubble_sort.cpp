#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void recursiveBubbleSort(int arr[], int n){
        if(n == 1)
            return;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        recursiveBubbleSort(arr, n - 1);
        
    }
    void bubbleSort(int arr[], int n)
    {
        recursiveBubbleSort(arr, n);
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {234,235,1232,768};
    int n = 4;
    
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}