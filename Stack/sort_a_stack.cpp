#include <bits/stdc++.h> 
void sortedInsert(stack<int>& s, int temp){
    if(s.empty() || (!s.empty() && s.top() < temp)){
        s.push(temp);
        return;    
    }
    int top = s.top();
    s.pop();
    sortedInsert(s, temp);
    s.push(top);
    
}
void sortStack(stack<int> &stack)
{
    if(stack.empty())
        return;
    int temp = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack, temp);
}