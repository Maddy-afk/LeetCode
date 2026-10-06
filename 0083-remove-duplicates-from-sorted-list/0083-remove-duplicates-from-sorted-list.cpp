/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     // NULL case 
     if ( head == NULL)return NULL ; 

     // not null case
     ListNode* curr = head ;
    
     while(curr->next != NULL){
        // if duplicate
        if (curr->val == curr->next->val){
            ListNode* deletenode = curr->next ;   
             ListNode* temp = curr->next->next ; 
            //delete node 
          delete(deletenode);
          curr->next = temp ; 
        }
        else{ // if no duplicate 
            curr = curr->next ; 
        }
     }
     return head ; 
    }
};