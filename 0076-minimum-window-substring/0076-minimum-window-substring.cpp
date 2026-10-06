class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>map(128 , 0) ;
        for(auto c : t){             // map me thusna 
            map[c]++;
        }
            int counter = t.size() , begin = 0 , end = 0  ; 
            int d = INT_MAX ;                                 // kitna specefic chaiye total kitna chaiye lmnt 
            int head = 0 ; 

            while(end < s.size()){
                if(map[s[end]] > 0)       
                counter-- ;
                map[s[end]]-- ; 
                end++;
                while(counter == 0){
                    if(end - begin < d){
                    d = end - begin ; 
                    head = begin ; 
                    }
                
                map[s[begin]]++;
                if(map[s[begin]]>0)
                counter++; 
                begin++ ;
                }
            }
        
        if(d == INT_MAX)
        return "";
        return s.substr(head , d);
    }
};