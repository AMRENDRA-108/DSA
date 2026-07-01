class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] != val){

                nums[k] = nums[i];
                k++;

            }
            // Agar nums[i] == val hai, toh hum kuch nahi karenge.
            // for loop ka 'i++' apne aap i ko agle element par le jayega.
        }
        return k;
        
    }
};