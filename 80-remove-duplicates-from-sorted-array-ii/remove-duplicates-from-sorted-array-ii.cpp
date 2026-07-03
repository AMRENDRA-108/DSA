class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Agar array me 2 ya usse kam elements hain, to kuch karne ki jarurat hi nahi hai
        if (nums.size() <= 2) {
            return nums.size();
        }
        
        int k = 2; // Writer pointer: pehle 2 elements hamesha safe hain
        
        // i hai hamara Explorer pointer
        for (int i = 2; i < nums.size(); i++) {
            // Agar current element, valid array ke pichle se pichle element ke barabar nahi hai
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i]; // To isko sahi jagah par bitha do
                k++; // Aur apne valid array ki length badha do
            }
        }
        
        return k; // Sahi length return karo
    }
};