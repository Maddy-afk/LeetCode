/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void inserttail(Node* &head , Node*&tail , int d){
        Node* newNode = new Node(d);   // d me data paas hoga ll ka 
        if(head == NULL){
            head = newNode ; 
            tail = newNode ; 
        }
        else{       // aur bhi elements hai aage 
           tail->next = newNode ; 
           tail = newNode ;           // updating tail to last elemnt 
        }
    }
public:
    Node* copyRandomList(Node* head) {
        // creating clone 
        Node* clonehead = NULL ;
        Node* clonetail = NULL ;

        Node* temp = head ; 
        while ( temp != NULL){
            inserttail(clonehead , clonetail , temp->val);
            temp = temp->next ; 
        }
            // creating a map 
            unordered_map<Node* ,Node*>oldtonewnode ; 

            Node* originalnode = head ;    //setting both pointer of clone and og at starting
            Node* clonenode = clonehead ; 
            while(originalnode != NULL && clonenode != NULL ){
                oldtonewnode[originalnode] = clonenode ; 
                originalnode = originalnode->next ; 
                clonenode = clonenode->next ; 
            }
            originalnode = head ; 
            clonenode = clonehead ; // reinitialisation of both strting pointers 
            while(originalnode != NULL){    // for the random pointers 
               clonenode->random = oldtonewnode[originalnode->random] ; 
               originalnode = originalnode->next ; 
               clonenode = clonenode->next ; 
            } 
            
        
        return clonehead ; 
    }
};