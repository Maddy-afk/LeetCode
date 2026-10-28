class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int>ans ; 
        for(auto c : arr){
            ans[c]++;
        }
        unordered_set<int>seen;
        for(auto i : ans ){
            if(seen.find(i.second)!= seen.end()){
                return false ;
            }
            seen.insert(i.second);
        }
        return true ; 
    }
};