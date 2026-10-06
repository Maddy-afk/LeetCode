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
        if (!head || !head->next )return head ; // this 

        ListNode* dummy = new ListNode(-1);   // this like why -1 insite bracket 
        dummy->next = head ; 
        ListNode* prev = dummy ; 
        ListNode* curr = head ; 

        while (curr && curr->next){ // what is this syntax of while 
            if (curr->val == curr->next->val){
                while(curr->next&& curr->val == curr->next->val){
                    curr = curr->next ; 
                }
                prev->next = curr->next ; // skipping all duplicates 
            }else{
                prev = prev->next ; // move to next unique node
            }
            curr = curr->next ; 
        }
        return dummy->next ; // start se print krna h jinta remaining hai 
    }
};