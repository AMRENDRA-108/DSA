class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                return mid; 
            }
            
            // SAHI LOGIC:
            if (nums[mid] < target) {
                low = mid + 1;  // Target bada hai, toh right side jayange (low ko badhao)
            } else {
                high = mid - 1; // Target chota hai, toh left side jayange (high ko kam karo)
            }
        }
        
        return -1;
    }
};