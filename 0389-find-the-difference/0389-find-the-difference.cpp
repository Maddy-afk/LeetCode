class Solution {
public:
    char findTheDifference(string s, string t) {
       
        unordered_map<char , int>mp ; 
        

        for(auto k : s ){
            mp[k]++;
        }
        for(auto k : t){
           if(mp[k] == 0){
            return k ; 
           }
            mp[k]--;
        }
       return 0 ; 
    }
};