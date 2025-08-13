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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         int  carry=0;
       int  sum=0;
       ListNode* newlisthead=NULL,*curr=NULL;
     ListNode* curr1=l1,*curr2=l2;
    while(curr1  !=NULL  || curr2!=NULL){
        int val1 = (curr1 != NULL) ? curr1->val : 0;
        int val2 = (curr2 != NULL) ? curr2->val : 0;
          sum=val1+val2+carry;
          carry=sum/10;
          int value1=sum%10;
          ListNode* node=new ListNode(value1);
          if(newlisthead==NULL){
            newlisthead=node;
            curr=newlisthead;

          }
          else{
            curr->next=node;
            curr=node;

          }


        curr1=curr1!=NULL?curr1->next:NULL;
         curr2=curr2!=NULL?curr2->next:NULL;
    }
     if(carry!=0){
    curr->next=new ListNode(carry);
    }
  

  
    
     
    
        return newlisthead;
    }
};