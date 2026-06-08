class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();       // Original rows
        int n = matrix[0].size();    // Original columns
        
        // 1. Naye size (n x m) ka matrix banaya aur 0 se initialize kiya
        vector<vector<int>> ans(n, vector<int>(m, 0));
        
        // 2. Loops chalakar values copy ki
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][i] = matrix[i][j]; // Rows ko columns banaya
            }
        }
        
        return ans;
    }
};