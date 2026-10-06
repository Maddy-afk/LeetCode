class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0 ; 
        int end = nums.size() - 1 ; 
        while ( start <= end){
            int mid = start + (end - start) / 2 ; 
            // base case 
            if ( nums[mid] == target)return mid ; 

            // check if left part is sorted
            if ( nums[mid] >= nums[start]){
                if ( target >= nums[start] && target < nums[mid]){
                    end = mid - 1 ; 
                }
                else{
                    start = mid + 1 ; 
                }
            }
            // if right side is sorted 
            else{
                if (target > nums[mid] && target <= nums[end]){
                    start = mid + 1 ; 
                }
                else{
                    end = mid - 1 ; 
                }
            }
        }
        
       
      return -1; 
    }
};