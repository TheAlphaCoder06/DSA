/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
     if(head == NULL)
         return head;
     Node* curr = head;
    while(curr->next != NULL){
        if( curr->data == curr->next->data ) {
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
        }
    }
    return head;
}