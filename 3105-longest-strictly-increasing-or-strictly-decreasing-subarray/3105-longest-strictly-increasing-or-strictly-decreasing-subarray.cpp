class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt = 1 ;
        int cnt2 = 1 ; 
        int maxi = 1 ; 
        for(int i = 0 ; i < nums.size()-1 ; i++){
                         if (nums[i] == nums[i+1]){
                cnt = 1 ; 
                cnt2 = 1 ; 
            }
           else if(nums[i] < nums[i+1]){   // for positive
            cnt2 = 1 ; 
                cnt++;
            }
            
            else if(nums[i] > nums[i+1]){
                   cnt = 1 ; 
                cnt2++;
            }
         maxi = max({maxi ,cnt , cnt2});
        }
        
        return maxi ; 
    }
};