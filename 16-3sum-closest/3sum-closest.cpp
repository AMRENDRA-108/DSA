class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        // sabse pehle sort krange

        sort(nums.begin(),nums.end());

        //initialize krange closet sum ko first three element ka
        
        int  closestSum = nums[0] + nums[1] + nums[2];

        // i ko run krwange last element se 2 pehle tak (1 pehle left or last me right)

        for(int i = 0; i < n-2; i++){
            //Ab left or right ko initialize krange
            int left = i + 1;
            int right = n - 1;

            // Ab two pointer lagange

            while(left < right){
                int current_sum = nums[i] + nums[left] + nums[right] ;

                // agar current sum target ke close hai to closet sum me update kr dange
                if(abs(current_sum - target) < abs(closestSum - target)){

                    closestSum = current_sum;

                }
                //comparision on target ke basis pe

                if(current_sum < target){
                    left++;
                }
                else if(current_sum > target){
                    right--;
                }
                else{
                    //found
                    return current_sum;
                }
            }
        }

        return closestSum;
        
    }
};