class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // sort the strings
        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];
        string ans = "";

      
      // runing the loop for all character of string

     for(int i = 0;i<min(first.length(),last.length()); i++){

        if(first[i] != last[i]){
            break;
        }
        ans = ans + first[i];

     }
     return ans;
    
    }
};