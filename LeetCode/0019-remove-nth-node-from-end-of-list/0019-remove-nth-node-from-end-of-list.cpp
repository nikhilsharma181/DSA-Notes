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
    ListNode* deleteAtIndex(int index,ListNode* head) {
         ListNode  *curr=head;
         ListNode  *prev=NULL;
         int currentIndex=0;
          while(curr!=NULL){
               if(currentIndex==index){
    if(prev!=NULL){prev->next=curr->next;}
                 
                else{
                    head=curr->next;
                }
                //node->next=curr;
                delete(curr);
                break;


               }
            currentIndex++;
            prev=curr;
            curr=curr->next;
          }
          return head;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int  length=1;
        ListNode  *  tail=head;
        while(tail->next){
            
            tail=tail->next;
            length++;
        }
        
         int index=length-n;
        return deleteAtIndex(index,head);
        
    }
};