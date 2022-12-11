#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next;

        Node(){}

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(next!=NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memory free for node with data: "<<value<<"\n";
        }
};

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    if( head == NULL ) {
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, int data){
    Node* tail = head;
    Node* temp = new Node(data);
    if( head == NULL ) {
        head = temp;
    } else {
    while( tail->next != NULL ) {
        tail = tail->next;
    }
    tail->next = temp;
    temp->prev = tail;
    }
}

void insertAtPosition(Node* &head, int data, int position) {
    if ( position == 1 ) {
        insertAtHead(head, data);
        return;
    }
    Node* curr = head;
    int cnt = 1;
    while( cnt < position - 1 ) {
        curr = curr->next;
        cnt++;
    }
    if( curr->next == NULL){
        insertAtTail(curr, data);
        return;
    }
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next->prev = temp;
    temp->prev = curr;
    curr->next = temp;
}

void deleteNode(Node* & head, int position) {
    if( position == 1 ) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    } else {
        int count = 1;
        Node* curr = head; 
        Node* prev = NULL;
        while( count < position ){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* head = NULL;
    insertAtHead(head, 3);
    printList(head);
    insertAtTail(head,1);
    printList(head);
    insertAtPosition(head, 0, 1);
    insertAtPosition(head, 9, 2);
    insertAtPosition(head, 5, 3);
    printList(head);
    deleteNode(head, 1);
    deleteNode(head, 2);
    deleteNode(head, 3);
    printList(head);
    return 0;
}