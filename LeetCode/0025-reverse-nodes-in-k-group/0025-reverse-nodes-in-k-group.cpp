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
    ListNode* reverse(ListNode* start, ListNode* end){
        ListNode*  prev=NULL;
        ListNode*  curr=start;
         while(curr!=end){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
         }
         return   prev;

    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head,*prev=NULL,*start=head;
         int counter=0;
        while(curr!=NULL){
           
            counter++;
            if(counter==k){
               ListNode*   nextstart=curr->next;
               ListNode* rehead= reverse(start,curr->next);
                if(prev!=NULL){
                   prev->next=rehead; 
                }
                else{
                    head=rehead;

                }  
                start->next=nextstart;
                prev=start;
                curr=nextstart;
                start=curr;
               
                counter=0;
            }
           else{
            curr=curr->next;
           }
         
            
        }
        return head;
        
        
    }
};