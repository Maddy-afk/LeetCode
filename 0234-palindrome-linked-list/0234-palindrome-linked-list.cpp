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
    private:
    ListNode* getmid (ListNode* head){
        ListNode* slow = head ; 
        ListNode* fast = head->next ; 
        while (fast && fast->next){
            fast = fast->next->next ; 
            slow = slow->next ; 
        }
        return slow ; 
    }

    ListNode* reverse (ListNode* head ){
        ListNode* curr = head ; 
        ListNode* nex = NULL;
        ListNode* prev = NULL; 
     
        while ( curr != NULL ){
            nex = curr->next ;
            curr->next = prev ; 
            prev = curr ; 
            curr = nex ; 
        }
         return prev ; 
    }
public:
    bool isPalindrome(ListNode* head) {
        // edge case 
        if ( head == NULL)return true  ; 

        // find mid 
        ListNode* middle = getmid(head); 
        //reverse mid 
        ListNode* temp = middle->next ;//bhej diye 
        middle->next = reverse(temp); // reversed attach kr diye 
        // compare both halves 
        ListNode* h1 = head ; 
        ListNode* h2 = middle->next ;
        
        while ( h2 != NULL){
            if (h2->val != h1->val){
               return false  ; 
            }
            h1 = h1->next ; 
            h2 = h2->next ; 
        }
        return true ; 
       
    }
};