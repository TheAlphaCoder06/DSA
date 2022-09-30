#include <bits/stdc++.h> 
using namespace std;


int flipBits(int* arr, int n) 
{
    int currCount = 0, maxCount = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            currCount++;
           
        }
        else{
            currCount--;
            cnt++;
            if(currCount<0)
                currCount = 0;
        }
        maxCount = (currCount>maxCount)?currCount:maxCount;
    }
    return ( maxCount + cnt );
}

int main(){

    int arr[] = {1, 0, 0, 1, 1, 0};
    int n = 6;

    cout<<flipBits(arr, n);

    return 0;


}