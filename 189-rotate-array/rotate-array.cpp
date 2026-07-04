class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Agar k, array ke size se bada ho (jaise k=10, n=7) to bache hue steps nikalne ke liye
        
        // Step 1: Poore array ko reverse karein
        reverse(nums.begin(), nums.end());
        
        // Step 2: Pehle k elements ko reverse karein
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Bache hue elements ko reverse karein
        reverse(nums.begin() + k, nums.end());
    }
};