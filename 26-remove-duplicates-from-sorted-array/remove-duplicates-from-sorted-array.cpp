class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
       int officer = 0;
       int cm = 1;
       int count = 1;

       int n = nums.size();

       if(n == 0) return 0;

       while(cm<n){

        if(nums[cm] == nums[cm-1]){
            cm ++;
            continue;
        }
        else {
            nums[officer + 1] = nums[cm];
            officer++;
            count ++;
            cm ++;
        }

       }
      
       return count;
            
        
    }
};