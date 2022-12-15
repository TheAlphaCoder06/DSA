class Solution{
  private:
    Node* reverse(Node* &head){
        Node* curr = head;
        Node* prev = NULL;
        Node* frwd = NULL;
        
        while(curr!=NULL){
            frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
        }
        return prev;
    }
    Node* getMid(Node* head){
        Node* fast = head->next;
        Node* slow = head;
        while(fast!=NULL and fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL)
            return true;
        Node* middle = getMid(head);
        Node* temp = middle->next;
        middle->next = reverse(temp);
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};