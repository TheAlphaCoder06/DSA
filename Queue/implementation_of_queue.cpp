#include <bits/stdc++.h> 
class Queue {
public:
    int* arr;
    int size;
    int qfront;
    int qrear;
    Queue() {
        // Implement the Constructor
        size = 10001;
        qfront = 0;
        qrear = 0;
        arr = new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == qrear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(qrear == size)
            return;
        else
            arr[qrear++] = data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qrear == qfront)
            return -1;
        else{
            int ans = arr[qfront];
            qfront++;
            if( qfront == qrear)
                qfront = qrear = 0;
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qrear == qfront)
            return -1;
        else
            return arr[qfront];
    }
};