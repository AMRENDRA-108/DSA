class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t

        while (i < s.length() && j < t.length()) {
            // Agar character match hota hai, toh s ka pointer aage badhega
            if (s[i] == t[j]) {
                i++;
            }
            // t ka pointer har baar aage badhega
            j++;
        }

        // Agar i poori string s ko traverse kar chuka hai, toh true warna false
        return i == s.length();
    }
};