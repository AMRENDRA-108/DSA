class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;
       // Jab tak dono pointers ek dusre ko paar nahi kar lete
        while(left < right){
            // Dono elements ko aapas me badal dange (Swap)
            swap(s[left],s[right]);

            left++;
            right--;
        }
        
    }
};