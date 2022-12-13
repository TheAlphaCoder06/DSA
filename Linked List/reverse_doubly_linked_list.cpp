#include <bits/stdc++.h> 
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
        
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

Node* reverseDLL(Node* head)
{   
if ( head == NULL ) 
        return NULL;

    Node* head_ref = NULL;
    Node* frwd = NULL;
    Node* curr = head;
    
    while ( curr != NULL ) {
        frwd = curr->next;
        if( curr->next == NULL )
            head_ref = curr;
        curr->next = curr->prev;
        curr->prev = frwd;
        curr = frwd;
    }
    return head_ref;
}


