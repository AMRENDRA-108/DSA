class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>romanValue = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
    };
    int total = 0;
    int prevValue  = 0;
    // traversing from right to left
    for (int i = s.size()-1 ; i >= 0; i--) {
        int currentValue = romanValue[s[i]];
        // if current value is less than last value then subract it
        if(currentValue < prevValue){
            total = total - currentValue;
        }
        // if greater or equal then add
        else{
            total = total + currentValue;
        }
        prevValue = currentValue;
    }
    return total;
}
    
};