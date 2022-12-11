#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){}

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            int value = this->data;
            delete next;
            cout<<"Memory: "<<value<<"\n";
        }
};

void printList(Node* head){
    Node* temp = head;
    cout<<temp->data<<" ";
    while(temp->next != head ){
        temp = temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

void insertNode(Node* &head, int element, int data) {
    Node* temp = new Node(data);
    if(head == NULL) {
        temp->next = temp;
        head = temp;
    } else {
        Node* curr = head;
        while( curr->data != element ) {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;    
    }
}

void deleteNode(Node* &head, int element) {
    if( head == NULL ) {
        cout<<"Empty List";
        return;
    } else {
        Node* prev = head;
        Node* curr = prev->next;
        while( curr->data != element) {
            prev = curr;
            curr = curr->next;
        }
        if ( prev == curr ) {
            head = NULL;
            delete head;
            return;
        }
        prev->next = curr->next;
        if( curr == head ){
            head = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node* head = NULL;
    insertNode(head, 1, 7);
    insertNode(head, 7, 2);
    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    printList(head);
    deleteNode(head, 7);
    printList(head);

    

    return 0;
}