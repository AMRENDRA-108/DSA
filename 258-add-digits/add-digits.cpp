class Solution {
public:
    int addDigits(int num) { // num = 38
         while(num > 9){ //38,  , |11
         int ans = 0,rem;
         while(num != 0){ //38,3 | 11,1
            rem = num % 10; // 8,3,1,1
            num = num /10;  // 38/10 = 3,  3/10 = 0| 11/10 = 1, 1/10 = 0
            ans = ans + rem; // 0 + 8 = 8, 8 + 3 = 11| 1 , 1+1 =2
         }
         num = ans; // 11 ,2
         }
         return num;
    }
};