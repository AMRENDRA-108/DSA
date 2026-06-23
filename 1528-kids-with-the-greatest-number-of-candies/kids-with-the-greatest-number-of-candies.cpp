class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        // Candies array mein se sabse bada number dhoondhange
        int maxCandies = *max_element(candies.begin(),candies.end());

        //Answer store karne ke liye ek bool type ka array bna liye
        vector<bool>result;

        for(int i = 0;i < candies.size();i++){
            if(candies[i] + extraCandies >= maxCandies){
                
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

        return result;
        
    }
};