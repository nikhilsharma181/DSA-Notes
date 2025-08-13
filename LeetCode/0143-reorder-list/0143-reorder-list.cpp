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
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode* curr=head,*prev=head;
          int length=0;
          while(curr!=NULL){
            st.push(curr);
            length++;
            curr=curr->next;
          }
          curr=head;
           length=int((length)/2);
           
           while(length>0){
               
                   ListNode*  reorder=st.top();
                    st.pop();
                    
                   
                    
                    
                        ListNode* temp=curr->next;
                     curr->next=reorder;
                    reorder->next=temp;
                    
                    


                
               
               
                 curr= temp;
                length--;
           }
           curr->next=NULL;


        
    }
};