#include <bits/stdc++.h>
using namespace std;

void mearge(int *arr, int s, int e){
    int m = s + ( e - s)/2;
    int len1 = m - s + 1;
    int len2 = e - m;
    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
    k = m + 1;
    for (int j = 0; j < len2; j++)
    {
        second[j] = arr[k++];
    }
    int index1 = 0, index2 = 0;
    k = s;
    while(index1<len1 and index2<len2){
        if(first[index1] > second[index2]){
            arr[k++] = second[index2++];
        }
        else
            arr[k++] = first[index1++];
    }
    while(index1<len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }
    delete []first;
    delete []second;
}


void meargeSort(int *arr, int s, int e){
    // base case
    if(s>=e)
        return;
    int m = s + ( e - s)/2;
    // left part sort krna hai
    meargeSort(arr, s, m);
    // right part sort krna hai
    meargeSort(arr, m + 1, e);
    // mearge left and right part
    mearge(arr, s, e);
}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int s = 0, e = 6;

    meargeSort(arr, s, e);
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}