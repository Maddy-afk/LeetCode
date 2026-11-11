class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         int step = 0 ;
        while(true){                   // for continiating the loop 
                              
            for(int i = 0 ; i < tickets.size() ; i++){    
                if(tickets[i] == 0)  continue ;          // agr tickets khatm hai to skip them 
                   step++;                               // count the second if non zero wla person hai 
                   tickets[i]--;                             // and also decrement the tickets 
                   if(tickets[k] == 0)return step ;              // if k wla hi zero hua to return (measure use hi krna h)
            }
        }
    }
};