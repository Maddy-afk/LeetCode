class Solution {
public:
    int maximumGap(string t, string s) {
        int n = t.size() , m = s.size() , j ; 
        vector<int>left(n);
        j = -1 ; 
        for(int i = 0 ; i < n ; i++){
            left[i] =  j = s.find(t[i] , j+1);
        }
        vector<int>right(n);
        j = m ; 
        for(int i = n-1 ; i>= 0 ; --i){
            right[i] = j = s.rfind(t[i] , j-1);
        }
        int res = 0 ; 
        for(int i = 0 ; i < n-1 ; ++i){
            res = max(res , right[i+1] - left[i] );
        }
        return res ; 
    }
};