class Solution {
public:
    string removeOuterParentheses(string s) {
        string final = "";
        int opened = 0;

        for(auto i: s) {
            if(i == '(') {
                opened++;
                if(opened > 1) {
                    final.push_back(i);
                }
            }
            else {
                opened--;
                if(opened > 0) {
                    final.push_back(i);
                }
            }
        }
        return final;
    }
};
