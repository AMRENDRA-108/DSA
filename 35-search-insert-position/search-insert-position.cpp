class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            // Integer overflow se bachne ke liye mid aise nikalte hain
            int mid = low + (high - low) / 2;
            
            // Agar target mil gaya
            if (nums[mid] == target) {
                return mid;
            }
            // Agar target bada hai, toh right half mein search karein
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            // Agar target chota hai, toh left half mein search karein
            else {
                high = mid - 1;
            }
        }
        
        // Agar target nahi mila, toh 'low' hi uski correct insertion position hogi
        return low;
    }
};