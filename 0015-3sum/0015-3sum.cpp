class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res ;
        sort(nums.begin() , nums.end()); 

        for(int i = 0 ; i < nums.size()  ; i++){ 
            if (i > 0 && nums[i] == nums[i - 1]){ // to prevent if i incounters same element after incrment 
                continue ;                         // i > 0 prevents i - 1 making it -1 (negative index which is invalid)
            }
            int j = i + 1 ; 
            int k = nums.size() - 1 ;
            while ( j < k){    // if j reaches k i++
                int total = nums[i] + nums[j] + nums[k] ; 
                if (total < 0 ){       // if smaller thn total j++
                    j++;
                }  
                else if (total > 0){          // if bigger then k-- ; 
                    k--;
                }
                else{
                    res.push_back({nums[i] , nums[j] , nums[k]});    // if reached 0 then store data in res array and incrment for next search 
                    j++;
                    while (nums[j] == nums[j  - 1] && j < k){  
                      j++;                                             //if j incounters same elmt skip even if ans found or not 
                    }
                }
            }
        } 
        return res ; 
    }
};