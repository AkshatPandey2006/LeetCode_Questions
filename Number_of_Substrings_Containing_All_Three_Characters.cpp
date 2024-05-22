class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = s.size();
        int ans = 0;
        int begin = 0;
        int end = 0;
        vector<int>occ(3);
        while(begin<=end && end<l){
            char ch = s[end];
            occ[ch-97]++;
            while(occ[0] && occ[1] && occ[2]){
                ans += l - end;
                occ[s[begin]-97]--;
                begin+=1;
            }
            end++;
        }        
        return ans;
    }
};
