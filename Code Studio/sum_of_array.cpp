#include <bits/stdc++.h>

using namespace std;


vector<int> reverse(vector<int> ans){
    int i = 0;
    int j = ans.size()-1;
    while(i<j){
        swap(ans[i++],ans[j--]);
    }
    return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
    int j = m-1;
    
    vector<int> ans;
    int carry=0, sum=0;
    
    while(i>=0 and j>=0){
        sum = a[i] + b[j] + carry;
        carry = sum /10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        sum = a[i] + carry;
        carry = sum /10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        sum = b[j] + carry;
        carry = sum /10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
}

int main(){

    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {6};
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    ans = findArraySum(arr1,n,arr2,m);

    return 0;
}