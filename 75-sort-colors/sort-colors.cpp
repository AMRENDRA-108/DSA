class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid <= high){
            if(nums[mid] == 0){  // 0 ko array ke left side shift krange
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){ // 1 middle me hi rahega
                mid++;
            }
            else {  //(nums[mid] == 2)  to array ke right side shift hoga
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        
        
    }
};