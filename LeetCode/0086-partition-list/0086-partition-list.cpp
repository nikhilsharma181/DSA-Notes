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
    ListNode* partition(ListNode* head, int x) {    
         ListNode* lessDummy=new ListNode(0);
         ListNode* greaterDummy=new ListNode(0);
       
        ListNode* lessTail=lessDummy,*greaterTail=greaterDummy;
        
        ListNode*  curr=head;
        while(curr!=NULL){
             if(curr->val<x){
                lessTail->next=curr;
                lessTail=lessTail->next;
              
             }
             else{
                 greaterTail->next=curr;
                 greaterTail=greaterTail->next;

             }
             curr=curr->next;
        }
        //cobine  both list
         greaterTail->next=NULL;
                lessTail->next=greaterDummy->next;
               
                


            
        
        return lessDummy->next;
    }
};