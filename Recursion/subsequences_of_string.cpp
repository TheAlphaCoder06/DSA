#include <bits/stdc++.h> 

void solve(string str, vector<string> &ans, string output, int index){
//     Base Case
    if(index>=str.length()){
        if(output.length()>0)
            ans.push_back(output);
        return;
    }
//     Exclude
    solve(str, ans, output, index + 1);
    
//     Include
    output.push_back(str[index]);
    solve(str, ans, output, index + 1);
}

vector<string> subsequences(string str){
    vector<string> ans;
    string output="";
    int index = 0;
    solve(str, ans, output, index);
    return ans;
}
