class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int c = 0;
        int r = 0;
        int o = 0;
        int a = 0;
        int k = 0;
        int ans = INT_MIN;
        int frogs = 0;
        int n = croakOfFrogs.size();

        for(int i=0; i<n; i++) {
            switch(croakOfFrogs[i]) {
                case 'c':
                    frogs++;
                    c++;
                    break;
                case 'r':
                    r++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'a':
                    a++;
                    break;
                case 'k':
                    k++;
                    frogs--;
                    break;
            }
            ans = max(ans,frogs);
            if(r>c || o>r || a>o || k>a) return -1;
        }
        return frogs == 0 ? ans : -1;
    }
};
