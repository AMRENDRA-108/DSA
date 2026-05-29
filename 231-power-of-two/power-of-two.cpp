class Solution {
public:
    bool isPowerOfTwo(int n) { //n = 8,4,2
       if(n<1){
         return 0;
         }


        while(n % 2 == 0){ //8,4,2
           
             n = n/2;//8/2 = 4,2,1
        }
        return n == 1;
    }
};