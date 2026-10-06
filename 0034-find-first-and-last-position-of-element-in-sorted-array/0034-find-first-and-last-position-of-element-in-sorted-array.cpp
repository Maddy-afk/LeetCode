class Solution {
    int firstoccurence(vector<int>& nums, int target){
        int s = 0 ; 
        int e = nums.size() - 1 ; 
        int first = -1 ; 
        while (s<=e){
            int mid = s + (e - s) / 2 ;  
            if (nums[mid] == target){
               first = mid; 
               e = mid - 1 ; 
            }
            else if (nums[mid] < target)s = mid + 1 ; 
            else e = mid - 1 ;
        }
        return first ; 
    }
       int lastoccurence(vector<int>& nums, int target){
        int s = 0 ; 
        int e = nums.size() - 1 ; 
        int last = -1 ; 
        while (s<=e){
            int mid = s + (e - s) /2 ; 
            if (nums[mid] == target){
               last = mid; 
               s = mid + 1 ;  
            }
            else if (nums[mid] > target) e = mid - 1 ;  
            else s = mid + 1 ; 
        }
        return last ; 
       }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstoccurence(nums, target);
        if (first == -1)return {-1 , -1};
        int last = lastoccurence(nums , target);
        return {first , last};
       
    }
};