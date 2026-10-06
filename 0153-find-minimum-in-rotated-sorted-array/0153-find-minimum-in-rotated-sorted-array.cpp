class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0 ; 
        int e = nums.size() - 1 ; 
        int mid = 0 ; 
        while ( s < e){
            mid = s + ( e - s) / 2 ; 
            if ( nums[mid] < nums[e]){
                 e = mid ; 
            }
            else {
                s  = mid + 1 ; 
            }
            
        }
        return nums[s]; 
    }
};