#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        string reverseGetlineString(string &s){
            int start = 0;
            for(int i = 0; i <= s.length(); i++){
                if(s[i] == char(32) or s[i]=='\0'){
                    reverseString(s, start, i-1);
                    start = ( i + 1);
                }
            }
            return s;
        }

        string reverseString(string &s, int start, int end){
            while(start<end){
                swap(s[start++],s[end--]);
            }
            return s;
        }
};

int main(){

    string s;
    getline(cin,s);

    Solution obj;
    cout<<obj.reverseGetlineString(s);



    return 0;
}