class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i = 0;
       int j = numbers.size()-1; //number = [2,7,11,15] , target = 9
       while(i<j){                      //i=0,j=3  || i= 0,j=2 || i = 0,j=1
       int sum = numbers[i] + numbers[j];  // sum = 2+15 = 17 || 2+11=13 ||2+7 = 9 = target
        if(sum == target){                  // then 
            return{i+1,j+1};                 // i = 0+1=1,j=1+1=2
        }
        else if(sum>target){  //sum>target  || sum > target
            j--;               // j = 3-1=2 || j = 2-1=1
        }
        else{
            i++;
        }

       }
       
       return{};
    }
};