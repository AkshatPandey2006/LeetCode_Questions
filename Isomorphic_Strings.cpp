class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector&lt;int&gt; indexS(200, 0); 
        vector&lt;int&gt; indexT(200, 0); 
        
        int len = s.length(); 
        
        if(len != t.length()) { 
            return false;
        }
        
        for(int i = 0; i &lt; len; i++) { 
            if(indexS[s[i]] != indexT[t[i]]) {
                return false; 
            }
            
            indexS[s[i]] = i+1; 
            indexT[t[i]] = i+1;
        }
        
        return true;
    }
};
