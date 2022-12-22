#include <bits/stdc++.h> 
stack<int> solve(stack<int>& s, int x){
    //  base case
    if(s.empty()){
        s.push(x);
        return s;
    }
    int temp = s.top();
    s.pop();
    solve(s, x);
    s.push(temp);
    return s;
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    return solve(myStack, x);
}
