class Solution {
private:
    void letter_Combinations(string digits, int index, string output, string mapping[], vector<string> &ans){
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number];

        for(int i = 0; i<value.length(); i++){
            output.push_back(value[i]);
            letter_Combinations(digits, index + 1, output, mapping, ans);
            output.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        int index = 0;
        string output = "";
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        letter_Combinations(digits, index, output, mapping, ans);
        return ans;
    }
};