#include <iostream>
#include <map>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

Node* floydDetectLoop(Node*);
Node* beginingNode(Node*);

// Removes the loop T.C = O(n) S.c. = O(1)
void removeLoop( Node* head ){
     if(head == NULL )
        return;
    Node* startOfLoop = beginingNode(head);
    if(startOfLoop==NULL)
        return;
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop ) {
        temp = temp->next;
    }
    temp->next = NULL;
}

// Returns Begining Node of the Loop
Node* beginingNode( Node* head ){
    if (head == NULL ){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL)
        return NULL;
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
//Returns the intersection of slow and fast pointer T.C. = O(n) and S.C = O(1)
//Also called Hare_Tortoise algorithm
Node* floydDetectLoop( Node* head ) {
    if(head==NULL)
        return NULL;
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL and head!=NULL){
        fast = fast->next;
        if( fast->next != NULL )
            fast = fast->next;
        slow = slow->next;
        if( slow == fast )
            return slow;
    }
    return NULL;

}
// The complexity of this appraoch is T.C = O(n) and S.C = O(n)
bool detectLoop(Node *head)
{
    if ( head == NULL ) {
        return false;
    }
    map<Node*, bool> visited;
    while ( head != NULL ) {
        if( visited[head] == true)
            return true;
        else
            visited[head] = true;
        head = head->next;
    }
    return false;
 }

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = head;
    cout<<std::boolalpha<<detectLoop(head)<<endl<<floydDetectLoop(head)->data<<endl<<beginingNode(head)->data<<endl<<endl;
    removeLoop(head);
    print(head);

    return 0;
}