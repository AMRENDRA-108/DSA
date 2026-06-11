class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        int t = nums.size();
        
        // 1. Elements ko unke sign ke hisab se alag-alag vectors mein daalein
        for(int i = 0; i < t; i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        // 2. Size ab lein jab vectors mein elements bhar chuke hain (FIXED)
        int n = neg.size();
        int p = pos.size();

        //  Agar koi negative number nahi hai 
        if(n == 0){ 
            for(int i = 0; i < t; i++){
                nums[i] = nums[i] * nums[i];
            }
            return nums;
        }
        
        //  Agar koi positive number nahi hai 
        if(p == 0){
            for(int i = 0; i < t; i++){
                nums[i] = nums[i] * nums[i];
            }
            reverse(nums.begin(), nums.end());
            return nums;
        }
        
        // Negative numbers ka square karke unhe reverse kiye 
        for(int i = 0; i < n; i++){
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());
        
        //  Positive numbers ka square 
        for(int i = 0; i < p; i++){
            pos[i] = pos[i] * pos[i];
        }
        
        // Merge sorted arrays logic
        int i = 0; // neg vector ke liye pointer
        int j = 0; // pos vector ke liye pointer
        vector<int> res(n + p);
        int id = 0;
        
        while(i < n && j < p){
            if(neg[i] <= pos[j]){
                res[id] = neg[i];
                i++;
            }
            else{
                res[id] = pos[j];
                j++;
            }
            id++;
        }
        
        // Agar neg vector mein elements bach gaye hon
        while(i < n){
            res[id] = neg[i];
            i++;
            id++;
        }
        
        // Agar pos vector mein elements bach gaye hon
        while(j < p){
            res[id] = pos[j];
            j++;
            id++;
        }
        
        return res;
    }
};