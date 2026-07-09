class Solution {
public:
    string reverseWords(string s) {

        //Ek stringstream naam ka machine banayi aur isme input s daal diye

        stringstream ss(s);

        string word;   //isme ek ek krke nya word store hoga
        string result = ""; //isme ham fina answer rakange

        //yeh loop tab tak chalega jab tak machine ke pass words khatam nahi ho jata
        //'ss >> words' ka matlab : ss machine se ek word nikalange or word var me dalange

        while(ss>>word) {

            //Agar result khali hai (matlab ye bilkul pehla word hai)
            if(result == ""){
                result = word;
            }
            //Agar result me pehle se kuch words hai to naye words ko aage jorange
            else {
                result = word + " " + result;
            }
        }
        return result;


        
    }
};