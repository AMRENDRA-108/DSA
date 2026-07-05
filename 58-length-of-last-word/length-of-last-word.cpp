class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        // Step 1: Piche se saare trailing spaces ko skip karo
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: Ab jab tak letter mil rahe hain, length badhao
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};