#include <iostream>

using namespace std;

class Stack{
    public:
        int top;
        int* arr;
        int size;
        Stack(int size){
            top = -1;
            this->size = size;
            arr = new int[size];
        }
        void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;
            } else 
                cout<<"Stack overflow"<<endl;
        }
        void pop(){
            if( top>= 0)
                top--;
            else
                cout<<"Stack Underflow";
        }
        int peek(){
            if(top>=0)
                return arr[top];
            else{
                cout<<"Stack is empty"<<endl;
                return -1;
            }
        }
        bool empty(){
            if(top==-1)
                return true;
            else
                return false;
        }
};

int main()
{
    Stack s(6);
    s.push(1);
    cout<<s.peek()<<endl;
    s.push(2);
    cout<<s.peek()<<endl;
    s.push(3);
    cout<<s.peek()<<endl;
    s.push(4);
    cout<<s.peek()<<endl;
    s.push(5);
    cout<<s.peek()<<endl;
    s.push(6);
    cout<<s.peek()<<endl;
    cout<<std::boolalpha<<s.empty();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<endl<<std::boolalpha<<s.empty();

    return 0;
}