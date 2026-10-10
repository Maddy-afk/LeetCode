class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>st ; 
        for(auto c : s){
            if(!st.empty() && st.back().first == c){
                st.back().second++;
            }
            else{
                st.push_back({c,1});
            }
            if(st.back().second == k){
                st.pop_back();
            }
        }
        string ans = "";
        for(auto p : st){
            ans += string(p.second , p.first); 
        }
        return ans ; 
    }
};