int getLen(LinkedListNode<int>* head) {
    int count = 0;
    while( head!=NULL ) {
        count++;
        head = head->next;
    }
    return count;
}

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *&head, int K)
{
    if(head == NULL || K == 0){
        return head;
    }
    int length = getLen(head);
    //  Node to delete from begining
    int nodeToDeleted = length - K + 1;
    if( nodeToDeleted == 1 ) {
        LinkedListNode<int>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        LinkedListNode<int>* curr = head;
        LinkedListNode<int>* curr_next = NULL;
        int count = 0;
        while(count< (nodeToDeleted - 2) ) {
            count++;
            curr = curr->next;
        }
        curr_next = curr->next;
        curr->next = curr_next->next;
        curr_next->next = NULL;
        delete curr_next;
    }
    return head;
}