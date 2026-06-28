class Solution {
public:
    int findLucky(vector<int>& arr) {
        // Constraints ke accordig size
        vector<int>count(501,0);

        //Ab frequency count krange
        for(int num:arr){
            count[num]++;
        }
        //largest number ke liye pichhe se chek krange
        for(int i = 500;i>=1;i--){
            if(count[i] == i){
                return i;
            }
        }
        return -1;
        
    }
};