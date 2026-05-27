class Solution {
public:
    int reverse(int x) {
        int reversed_num = 0;
        
        while (x != 0) {
            // 1. Pop the last digit
            int pop = x % 10;
            x /= 10;
            
            // 2. Check for overflow before multiplying by 10
           
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            
            // 3. Push the digit
            reversed_num = (reversed_num * 10) + pop;
        }
        
        return reversed_num;
    }
};