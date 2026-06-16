class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int n = nums.size();
        // sorting the array
        sort(nums.begin(),nums.end());

        
        for(int i = 0; i < n-2 ; i++){

            //Agar pichhla element same hai to isko skip karange
            if(i > 0 and nums[i] == nums[i-1]) continue;
                
                // Two pointer setup
                int left = i + 1;
                int right = n - 1;

                while(left < right){
                    int sum = nums[i] + nums[left] + nums[right];

                    if ( sum == 0){
                        result.push_back({nums[i],nums[left],nums[right]});

                        // lakin agar duplicate mila to usko skip krna hoga
                        while(left < right && nums[left] == nums[left + 1]) left++;
                        while(left < right && nums[right] == nums[right - 1]) right --;

                        // pointer ko aage v badahana hoga

                        left++;
                        right--;
                    }

                    else if(sum < 0){
                        left++;
                    }
                    else{
                        right--;
                    }


                }

                



        }
        return result;
    }
};