class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); // if size = 5
        int totalSum = n *(n+1)/2; // 15
        // array ke saare element ka sum 
        int actualSum = 0;
        for(int num:nums){// nums ke saare value pe jayega ek ek krke
        // if 4 missing (0+1+2+3+5 ==11)
            actualSum = actualSum + num; // add all current value of num (0 + 11) = 11

        }
        return totalSum - actualSum; //15- 11= 4
    }
};