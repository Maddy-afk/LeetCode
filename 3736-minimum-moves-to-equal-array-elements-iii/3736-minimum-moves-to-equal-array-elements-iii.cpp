class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin() , nums.end());
     int last = nums.back() ;  
     int sum = 0 ; 
     for(int i = 0 ; i  < nums.size() ; i++){
       while(nums[i] != last){
        nums[i]++;
        sum++; 
       }
     }
     return sum ; 
    }
};