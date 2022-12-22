#include<iostream>
using namespace std;

class cqueue{
    private:
        int *arr;
        int cfront;
        int crear;
        int size;
    public:
        cqueue(){}
        cqueue(int size){
            this->size = size;
            arr = new int[size];
            cfront = -1;
            crear = -1;
        }
        bool enqueue(int value){
            if( (cfront == 0 && crear == (size-1)) || ( cfront!=0 and crear == (cfront-1)%(size - 1) ) ){
                cout<<"Circular queue is full";
                return false;
            }
            else if(cfront == -1){
                cfront = crear = 0;
            }
            else if(cfront!=0 && crear == size - 1){
                crear = 0;
            }
            arr[crear++] = value;
            return true;
        }

        int dequeue(){
            if(cfront == -1){
                cout<<"The queue is full";
                return -1;
            }
            int ans = arr[cfront];
            if(cfront == size - 1){
                cfront = 0;
            } else if(cfront == crear){
                cfront = crear = -1;
            } else{
                cfront++;
            }
            return ans;
        }
};

int main(){
    cqueue circular(10);
    circular.enqueue(1);
    circular.enqueue(2);
    circular.enqueue(3);
    circular.enqueue(4);
    circular.enqueue(5);
    circular.enqueue(6);
    cout<<circular.dequeue()<<endl;
    cout<<circular.dequeue()<<endl;
    cout<<circular.dequeue()<<endl;
    cout<<circular.dequeue()<<endl;
    cout<<circular.dequeue()<<endl;
    cout<<circular.dequeue()<<endl;
    cout<<circular.dequeue()<<endl;
    return 0;
}