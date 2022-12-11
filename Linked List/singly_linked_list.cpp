#include <bits/stdc++.h>
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
            if(this->next==NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"Memory free for node with data: "<<value<<"\n";
        }
};


void print(Node* n){
    if( n == NULL) {
        cout<<"The List is empty.";
        return;
    }
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<"\n";
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* head, int data){
    Node* temp = new Node(data);

    while(head->next != NULL){
        head = head->next;
    }
    head->next = temp;
}

void insertAtPosition(Node* &head, int position, int data){
    Node* ptr = head;

    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node *temp = new Node(data);

    int itr = 1;
    while (itr < position - 1)
    {
        ptr = ptr->next;
        itr++;
    }

    temp->next = ptr->next;
    ptr->next = temp;
    
}

void deleteNode(Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
    int itr = 1;
    Node* curr = head;
    Node* prev = NULL;
    while ( itr < position ){
        prev = curr;
        curr = curr->next;
        itr++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    }
}


int main(){
    cout<<"\n";
    Node* head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 2);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    print(head);
    insertAtPosition(head, 5, 9);
    print(head);
    deleteNode(head, 5);
    print(head);
    deleteNode(head, 2);
    print(head);
    deleteNode(head, 1);
    print(head);



    return 0;
}