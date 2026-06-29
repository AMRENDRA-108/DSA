class Solution {
public:
    bool isPalindrome(string s) {
        // do pointer lange ek start se or ek end se
        int left = 0;
        int right = s.length() - 1;

        // jab tak pointers ek dusre ko cross nahi karte

        while(left < right){

            // Agar left character alphanumeric nhi hai to aage badhange

            if(!isalnum(s[left])){
                left++;
            }
            // Agar right character alphanumeric nahi hai, toh peeche jayange
            else if(!isalnum(s[right])){
                right--;
            }
            // Jab dono valid characters hain, toh unhe compare karange
            else {
                if(tolower(s[left]) != tolower(s[right])) {
                    // Agar match nahi hua, toh palindrome nahi hai
                    return false;
                }
                left++;  // Agla character check karne ke liye
                right--; // Piche se agla character check karne ke liye
            }

        }
        

      // Agar loop poora chal gaya, matlab sab match ho gaya
        return true;
    }
};