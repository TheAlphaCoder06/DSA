#include <bits/stdc++.h>

using namespace std;


string removeNotRequired(string s){
    string temporary = "";
    for(int i = 0; i < s.length(); i++){
        if( (s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9') )         {
            temporary.push_back(s[i]);
        }
    }
    return temporary;
}


class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i = 0; i<s.length(); i++)
        {
            s[i] = (tolower(s[i]));
        }
        string temp = removeNotRequired(s);
       
        int start = 0, end = temp.length()-1;
        while(start<end){
            if(temp[start]!=temp[end]){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        return 1;
        
    }
};


int main(){

    Solution obj;
    string s = "A man, a plan, a canal: Panama";

    cout<<obj.isPalindrome(s);

    return 0;
}