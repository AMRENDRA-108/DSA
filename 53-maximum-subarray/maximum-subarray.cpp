class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int cheksum = 0; 
      int maxsum = INT_MIN;
      for(int val:nums) {
      cheksum = cheksum + val;
      maxsum = max(cheksum,maxsum);
      if(cheksum < 0){
        cheksum = 0;
      }
      }
        return maxsum;
    }
};