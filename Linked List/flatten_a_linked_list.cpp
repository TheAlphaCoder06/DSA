#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* merge(Node* first , Node* second)
{    
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;  
    Node* result;  
    if(first->data < second->data)
    {          
        result = first;
        result->child = merge(first->child,second);
    }      
    else{     
        result = second;    
        result->child = merge(first,second->child);   
    }   
    result->next = NULL; 
    return result; 
} 

Node* flattenLinkedList(Node* head) 
{    
    if(head == NULL || head->next == NULL) 
        return head;   
    return  merge(head,flattenLinkedList(head->next)); 
}
