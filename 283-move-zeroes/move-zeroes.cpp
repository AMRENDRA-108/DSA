class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int point = 0;
        // saare non zero elements ko aage shift krna hai
        for(int i = 0;i < n;i++){
            if(nums[i] != 0) {
                nums[point] = nums[i];
                point++ ;
            }
            
        }
        // bacha hus jagah pe o dal dena hai
        while(point<n){
            nums[point] = 0;
            point++ ;
        }
    }
};