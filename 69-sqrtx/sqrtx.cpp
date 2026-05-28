class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
         // let x = 9
        int low = 1,high = x,ans = 0;

        while(low <= high ){
            // mid = 5(high = 9, low = 1)
            // 2 iteration : mid = 2.5 = 2 (high = 4,low =1)
            // 3rd iteration : mid = 3.5 = 3 (high = 4,low = 3)
            long long mid = low + (high - low)/2;

            if (mid * mid == x){ // mid = 3;
                return mid;
            }
            else if( mid * mid < x){

            ans = mid; // 2nd iteration ans = 2
            low = mid + 1; // 2nd iteration low = 3
            }
            else{ //high = 5 - 1 = 4
                high = mid -1;
            }
        }
        // 
        return ans;
        
    }
};