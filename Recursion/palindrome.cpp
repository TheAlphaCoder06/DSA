#include <iostream>

using namespace std;

bool isPalindrome(string str, int i)
{
    int end = str.length() - i - 1;
    if(i>end)
        return true;
    if(str[i] != str[end])
        return false;
    else
        return isPalindrome(str, ++i);
}

int main()
{
    string str = "shubham";
    int i = 0;
    cout<<isPalindrome(str, i);

    return 0;
}