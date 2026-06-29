class Solution {
public:
    int countPrimes(int n) {
        // Base Case: Agar n ki value 2 ya usse kam hai, 
        // toh usse chhote koi prime numbers hote hi nahi hain (isliye return 0)
        if (n <= 2) return 0; 

        // Ek 'isPrime' naam ka vector (array) banaya jiska size 'n' hai.
        // Shuru mein hum maan ke chal rahe hain ki saare numbers prime hain (isliye 'true' set kiya)
        vector<bool> isPrime(n, true);
        
        // Humey pata hai ki 0 aur 1 prime nahi hote, toh unhe pehle hi 'false' kar diya
        isPrime[0] = isPrime[1] = false; 
        
        // Loop chalayenge sqrt(n) tak. Code mein isse 'i * i < n' likhte hain taaki fast chale.
        for (int i = 2; i * i < n; i++) {
            
            // Agar 'i' ek prime number hai (yaani abhi tak true hai)...
            if (isPrime[i]) {
                
                // ...toh uske aage ke saare multiples (tables) ko 'false' return karwange.
                // Hum 'i * i' se shuru kar rahe hain kyunki chhote multiples pehle hi bade numbers se kat chuke honge.
                for (int j = i * i; j < n; j = j + i) {
                    isPrime[j] = false; // Yeh prime nahi ho sakta kyunki yeh 'i' se divide hota hai
                }
            }
        }
        
        // Ab humare paas final list taiyar hai. 
        // Bas loop chalakar count karenge ki kitne numbers abhi bhi 'true' reh gaye hain.
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++; // Agar true mila, toh counter ko 1 badha do
            }
        }
        
        // Final answer return kar dange
        return count;
    }
};