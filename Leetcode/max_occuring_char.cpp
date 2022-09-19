#include <bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

class Solution
{
    int count[ASCII_SIZE] = {0};
    
    public:

        char maxOccChar(char* str){
            int size = strlen(str);
            int max = 0;
            char result;

            for (int i = 0; i < size; i++)
            {
                count[str[i]]++;
                if(max<count[str[i]]){
                    max = count[str[i]];
                    result = str[i];
                }
            }
            
            return result;
        }
};

int main()
{
    Solution obj;

    char str[] = "sample string";
    cout<<obj.maxOccChar(str);


    return 0;
}