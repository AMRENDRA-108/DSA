class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Key: Element ka naya value, Value: Uska index
        unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); i++) {
            // Check karange ki kya number pehle se map mein exist karta hai
            if (num_map.count(nums[i])) {
                // Agar exist karta hai, to check krange ki gap k se kam ya barabar hai ya nahi
                if (i - num_map[nums[i]] <= k) {
                    return true;
                }
            }
            
            // Agar nahi mila ya gap k se bada tha, to naya/updated index store karange
            num_map[nums[i]] = i;
        }
        
        // Agar poore loop mein kahin true return nahi hua
        return false;
    }
};