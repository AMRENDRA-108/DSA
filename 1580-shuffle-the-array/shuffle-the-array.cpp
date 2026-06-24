class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // Ek naya array banaya jiska size 2n hoga
        vector<int> result(2 * n);
        
        for (int i = 0; i < n; i++) {
            // Even indices (0, 2, 4...) par X waale elements aayenge
            result[2 * i] = nums[i];
            
            // Odd indices (1, 3, 5...) par Y waale elements aayenge
            result[2 * i + 1] = nums[i + n];
        }
        
        return result;
    }
};