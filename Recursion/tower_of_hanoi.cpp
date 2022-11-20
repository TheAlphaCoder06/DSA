#include <bits/stdc++.h>
using namespace std;

void helper(int n,vector<vector<int>>& ans,int s,int a,int d){
    if(n==0){
        return;
    }
    if(n==1){
        ans.push_back({s,d});
        return;
    }
    helper(n-1,ans,s,d,a);
    ans.push_back({s,d});
    helper(n-1,ans,a,s,d);
}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> ans;
    
    if(n==0){
        return ans;
    }
    helper(n,ans,1,2,3);
    return ans;
}

int main(){
    int n = 4;
    vector<vector<int>>answer = towerOfHanoi(n);
    for(auto row:answer){
        for(auto col:row){
            cout<<col<<" -> ";
        }
        cout<<endl;
    }
    return 0;
}