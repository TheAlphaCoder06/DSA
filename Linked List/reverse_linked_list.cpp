// Recursive approach 2
Node* reverse(Node* &head) {
    if( head == NULL || head->next == NULL ) {
        return head;
    }
    Node* smallerProb = reverse( head->next );
    head->next->next = head;
    head->next = NULL;
    return smallerProb;
}
// Recursive approach
void reverse(Node* &head, Node* curr, Node* prev) {
    if ( curr == NULL ) {
        head = prev;
        return;
    }
    Node* frwd = curr->next;
    reverse(head, frwd, curr);
    curr->next = prev;
}

Node* reverseLinkedList(Node *head)
{
//  Recursive appraoch 2
    return reverse(head);
//     Recursive Approach
    Node* curr = head;
    Node* prev = NULL;
    
    reverse(head, curr, prev);
    return head;
    
//     Iterative Approach
    if( head == NULL || head->next == NULL ) {
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* frwd = NULL;
    
    while ( curr != NULL ) {
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
    }
    return prev;
}

