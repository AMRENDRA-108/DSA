class Solution {
public:
    string intToRoman(int num) {
        
        //integer value or uske corresponding Roman symbol ki mapping in descending order

        vector<int>values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> symbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        //Ab ek String banayange Roman number store krne ke liye

        string result = "";

        for(int i = 0; i < values.size(); i++){

            //jab tak input num current value se bra ya brabar hai
            while(num >= values[i]){
                // Symbol ko result string mein jorange
                result = result + symbols[i];
                // Number mein se utni value ghatayange
                num = num - values[i];
            }
        }
        return result;

        
    }
};