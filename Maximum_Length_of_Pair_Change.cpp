class Solution {
public:

    static bool compare(vector<int>&a,vector<int>&b){
        if(a[1]==b[1])
            return a[0]<b[0];
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),compare);
        int c=0;
        int temp=INT_MIN;
        for(int i=0;i<pairs.size();i++){
            if(temp==INT_MIN ||temp<pairs[i][0]){
                temp=pairs[i][1];
                c++;
            }
        }
        return c;
    }

};
