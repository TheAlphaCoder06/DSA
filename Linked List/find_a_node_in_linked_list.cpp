int findNode(Node *head, int n){
    int index = -1;
    Node* temp = head;
    while( temp != NULL ) {
        index++;
        if( temp->data == n ) {
            return index;
        } else {
            temp = temp->next;
        }
    }
    return -1;
}