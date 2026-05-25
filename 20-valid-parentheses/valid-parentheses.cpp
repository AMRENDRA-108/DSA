class Solution {
public:
    bool isValid(string s) {
        // since we need pair of each char so,if length of string is odd then return false
        if(s.length()%2 != 0) return false;

        stack<char> st; // creating a stack

        for(char c:s){ 
            if(c == '('||c == '{'||c=='['){
                st.push(c);//enters elements in stack
            }
            else {

                 if(st.empty()) return false;

                char top = st.top();
                if((c == ')'&& top == '(') || 
                (c=='}'&& top == '{')||
                (c == ']'&& top == '[')){
                    st.pop();// if pair found remove it

                } else {
                    return false;
                }
            }

        }
        return st.empty();
        
    }
};