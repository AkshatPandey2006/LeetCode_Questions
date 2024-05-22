class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = 0;
        int c = matrix[0].size() - 1;

        while(r < matrix.size() and c >= 0) {
            int curr = matrix[r][c];
            if(curr == target) {
                return true;
            }
            else if(target > curr) {
                r++;
            }
            else {
                c--;
            }
        }
        return false;
    }
};
