class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size() ; 
        for (int i = n - 1 ; i>= 0 ; i--){
            if (i == n - 1) // if last then plus 
            v[i]++; 
            if(v[i] == 10){  // if reached 10 then 0 
              v[i] = 0 ; 
              if(i != 0){    // if i still not zero then previous element plus 1 (main line)
                v[i - 1]++;
              }
              else{
                v.push_back(0);// for 9 , 99 , 999 i need extra {0} to put 1 to make 10 , 100 , 1000 
                v[i] = 1 ; // putting 1 
              }
            }
        }    
        return v ; 
    }
};