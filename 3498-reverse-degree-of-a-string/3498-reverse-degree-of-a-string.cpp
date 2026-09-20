class Solution {
public:
    int reverseDegree(string s) {
        vector<int>ans ; 
        int multiple = 1 ;
        int anns = 0 ; 
        for(int i = 0 ; i <  s.size() ; i++){
          int a = 26-( s[i]-'a');
          ans.push_back(a);
        }
        for(int i = 0 ; i < ans.size() ; i++){
            
            anns +=  ans[i]*multiple;
            multiple++;
        }
        return anns;
    }
};