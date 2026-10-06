class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = 0 ; 
        int freq[26] = {0};
        for(int i = 0 ,  j = 0 ; j < s.size() ; j++){
            freq[s[j] - 'a']++;
           while( freq[s[j]-'a'] > 2){
             freq[s[i] - 'a']-- ; 
             i++;
           }
            ans = max(ans , j - i + 1);
        }
          return ans ; 
    }
};