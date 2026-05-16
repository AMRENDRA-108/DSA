class Solution {
public:
    int singleNumber(vector<int>& nums) {    // given array nums
        int ans = 0;                          // initialize  
        for(int i = 0;i < nums.size();i++) {                                
             //runs the array till the last index
            ans = ans ^ nums[i]; // 0 ^ 2 = 2;2^2=0;0^1=1; same num = 0
        }
        return ans;
    }
};