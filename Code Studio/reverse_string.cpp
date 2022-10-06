#include <bits/stdc++.h>

using namespace std;

void reverseStr(string &str, int i)
{
    int end = str.length() - i - 1;
    if(i > end)
        return;
    swap(str[i],str[end]);
    i++;
    reverseStr(str, i);
}

int main()
{
    string str = "mahbuhS";
    // cout<<reverseStr(str);

    int i = 0;
    reverseStr(str, i);

    return 0;
}

//! Leetcode reverse string

class Solution {
public:
    int i = 0;
    void reverseString(vector<char>& s) {
        int end = (s.size() - i - 1);
        if(i>end)
            return;
        swap(s[i], s[end]);
        i++;
        reverseString(s);
    }
};