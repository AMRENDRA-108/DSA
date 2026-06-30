class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Step 1: Store all unique jewels in a set for O(1) t.c

        unordered_set<char> jawelSet(jewels.begin(),jewels.end());

        // count karne ke liye count var lange

        int count = 0;

       // Step 2: Iterate through stones and check if they are jewels

       for(char stone : stones){  // stones me iterate kiye or val stone me assign kiye
             
             if(jawelSet.count(stone)){
                count++;
             }

       }

       return count;

        
    }
};