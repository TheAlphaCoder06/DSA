/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start


class Solution {
private:
     bool isEqual(int count1[26], int count2[26])
        {
            for (int i = 0; i < 26; i++)
            {
                if(count1[i] != count2[i])
                    return false;
            }
            return true;
            
        }
public:
    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0};
            for (int index = 0; index < s1.length(); index++)
            {
                int i = s1[index] - 'a';
                count1[i]++;
            }
            int count2[26] = {0};
            int i = 0, windowSize = s1.length();
            while(i<windowSize && i<s2.length())
            {
                int index = s2[i] - 'a';
                count2[index]++;
                i++;
            }
            if(isEqual(count1,count2))
                return true;
            while(i<s2.length())
            {
                char newChar = s2[i];
                int index = newChar - 'a';
                count2[index]++;
                char oldChar = s2[i - windowSize];
                index = oldChar - 'a';
                count2[index]--;
                i++;
                if(isEqual(count1,count2))
                    return true;
            }
            return false;
            
    }
};
// @lc code=end

