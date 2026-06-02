class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0,rem,mul = 1;
        if ( n == 0){
            return 1;
            }
        while(n){
            rem = n % 2;
            rem = rem ^ 1; // 0^1 =1 and 1 ^1 = 0, 
            n = n /2;
            ans += rem*mul;
            mul = mul * 2;


        }
        return ans;
        
    }
};