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
    ListNode* rotateRight(ListNode* head, int k) {
           if(head==NULL || head->next==NULL){
            return head;
           }
            
        ListNode* curr=head;
        ListNode* prev=NULL;
        int length=1;
        ListNode* curr1=head;
        while(curr1->next){
            
            curr1=curr1->next;
            length++;

        }
        k=k%length;
        int steps=length-k-1;
        cout<<length;
        curr1->next=head;
        ListNode*  tail=head;
        for(int  i=0;i<steps ;i++){
            tail=tail->next;

        }
        ListNode* headn=tail->next;
        tail->next=NULL;
        return headn;
        //circular
        //steps=length-k-1
        // while(  k >0){
        //       prev=curr;
        //       if(curr->next==NULL){
        //         prev->next=NULL;
        //         curr->next=head;
        //         head=curr;
        //         k--;

        //       }
        //      curr=curr->next;
              
        //      }
        //      return head;
        return NULL;
    }
};