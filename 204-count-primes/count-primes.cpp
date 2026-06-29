class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // 2 se chhote koi prime nahi hote

        // Ek boolean array banayein jismein shuru mein sabko true (prime) maan rahe hain
        vector<bool> isPrime(n, true);
        
        // 0 aur 1 prime nahi hain
        isPrime[0] = isPrime[1] = false; 
        
        // Sieve ka loop jo sqrt(n) tak chalega
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                // Agar 'i' prime hai, toh uske saare multiples ko false kar do
                // Hum i*i se shuru kar sakte hain kyunki usse chhote multiples pehle hi cover ho chuke honge
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Ab true values ko count kar lete hain
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }
        
        return count;
    }
};