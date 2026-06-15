class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        // Agar needle khali hai toh 0 return karein
        if (m == 0) return 0;
        
        // Haystack par loop chalao jahan tak needle fit ho sake
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            
            // Match check karo
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            
            // Agar poori needle match ho gayi toh starting index return karo
            if (j == m) {
                return i;
            }
        }
        
        // Agar nahi mila toh -1
        return -1;
    }
};