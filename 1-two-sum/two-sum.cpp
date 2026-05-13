class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // Hum j = i + 1 se start karte hain taaki same element repeat na ho
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    // Yahan hum vector return kar rahe hain
                    return {i, j};
                }
            }
        }
        
        // Agar koi solution nahi milta toh khali vector return karein
        return {};
    }
};