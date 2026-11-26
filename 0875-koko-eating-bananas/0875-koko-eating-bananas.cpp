class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int left = 1 ; 
       int right =INT_MAX;
       while(left <= right){
        int mid = left+(right-left)/2 ; 
        if(caneatbananas(piles , mid , h))right = mid - 1 ; 
        else left = mid+1 ; 
       } 
       return left ; 
    }
       int caneatbananas(vector<int>piles , int k , int h){
        int hrs = 0 ; 
        for(int pile : piles){
            int div = pile/k;
            hrs += div ;
            if(pile % k != 0)hrs++;
        }

       return hrs <= h ; 
    }
};