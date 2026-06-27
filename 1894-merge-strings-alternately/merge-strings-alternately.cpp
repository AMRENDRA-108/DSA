class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //Ek khali string lange result ko store karne ke liye
        string result = "";
        
        int i = 0; //Pointer for word1
        int j = 0;  //Pointer for word2

        while(i < word1.length() && j < word2.length()){
            //Alternate result me append karte jayega
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }

        // jab uper wale loop se bahar aayange yani ki koi ek condition galat hoga then :- 
        while(i < word1.length()){
            result += word1[i];
            i++;
        }
        while(j < word2.length()){
            result += word2[j];
            j++;
        }
        return result;
    }
    
};