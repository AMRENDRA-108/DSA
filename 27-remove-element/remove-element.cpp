class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // This pointer tracks the position for the next valid element
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is NOT the one we want to remove
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move it to the front
                k++;               // Increment our valid element count
            }
        }
        
        return k; // k is the number of elements not equal to val
    }
};