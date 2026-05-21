class Solution {
public:
    bool isPalindrome(int x) {
        // negative no or 10 se exactly divisible no hamesha false dega
        if((x<0) || (x % 10 == 0 && x != 0)){
            return false;
        }
        int reversedHalf = 0;
        while(x > reversedHalf){
            int lastDigit = x%10;
            reversedHalf = (reversedHalf * 10)+ lastDigit;
            x = x/10; // removing last digit
        }
        return(x==reversedHalf)|| (x==reversedHalf/10);

        
    }
};