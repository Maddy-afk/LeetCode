class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>ans ; 
        int j = 0 ; 
        for(auto c : pushed){
            ans.push(c);
            while(!ans.empty() && ans.top() == popped[j]){
                ans.pop();
                j++;
            }
        }
        return ans.size() == 0 ; 
    }
};