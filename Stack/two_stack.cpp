#include <bits/stdc++.h> 
class TwoStack {

public:
    int top1;
    int top2;
    int size;
    int *arr;
    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        size = s;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2 - top1 > 1)
            arr[++top1] = num;
        else
            return;
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if( top2 - top1 > 1)
            arr[--top2] = num;
        else
            return;
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if( top1 >= 0 ){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
            return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if( top2 < size ){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
            return -1;
    }
};
