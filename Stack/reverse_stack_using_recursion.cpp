void solve(stack<int>& s, int x){
    //  base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, x);
    s.push(temp);
}
void reverseStack(stack<int> &stack) {
    if(stack.empty())
        return;
        int temp = stack.top();
        stack.pop();
        reverseStack(stack);
        solve(stack, temp);
}