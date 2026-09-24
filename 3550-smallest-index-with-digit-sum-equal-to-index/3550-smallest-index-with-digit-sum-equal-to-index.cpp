class Solution {
public:
    int smallestIndex(vector<int>& nums) {
         //int index = 0 ; 

          
         
        for(int i = 0 ; i < nums.size() ; i++){
             int x = nums[i] ;
           // if(i == 1 && nums[i])return i ; 
           int sum = 0 ;
           while(x > 0){
            sum += x%10 ; 
            x /= 10 ; 
           }
            if(sum == i){
              return i ; 
                
            }
         //   index++ ;
        }
        return -1 ; 
    }
};