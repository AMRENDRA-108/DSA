class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Making unordered set to return duplicate element
        unordered_set<int>s;
        //conversion of nums value into x 
        for(int x:nums){
            // if count >= 1 return true
            if(s.count(x))return true;
            // inserting updated value of x
            s.insert(x);

        }
        return false;
    }
};