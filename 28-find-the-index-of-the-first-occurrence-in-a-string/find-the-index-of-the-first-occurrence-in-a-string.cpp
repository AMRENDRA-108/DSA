class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        // Agar needle khali hai toh 0 
        if (m == 0) return 0;
        
    
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            
            // Match check 
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            
            // Agar poori needle match ho gayi toh starting index return krange
            if (j == m) {
                return i;
            }
        }
        
        // Agar nahi mila toh -1
        return -1;
    }
};