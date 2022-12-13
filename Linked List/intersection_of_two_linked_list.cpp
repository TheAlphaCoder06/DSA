#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    map<Node*, bool>visited;
    while(firstHead!=NULL){
        visited[firstHead] = true;
        firstHead = firstHead->next;
    }
    while(secondHead != NULL){
        if(visited[secondHead]==true){
            return secondHead->data;
        }else
                secondHead = secondHead->next;
    }
    return -1;
}