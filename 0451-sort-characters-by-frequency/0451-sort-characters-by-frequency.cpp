class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp ; 
        multimap<int,char>r ; 
        string ss = "" ; 

        for(auto a : s)
            mp[a]++ ; 
            for(auto a : mp)
            r.insert({a.second , a.first});     // reversing element --> freq 
        for(auto it = r.rbegin(); it != r.rend()  ; ++it)   // r means from karger to smaller (reversing)
        ss += string(it->first , it->second);      // pushing 
        return ss ; 
    }
};