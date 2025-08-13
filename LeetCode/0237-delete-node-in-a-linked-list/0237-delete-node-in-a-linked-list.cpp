/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
public:
    void deleteNode(ListNode* node) {
        //  int  length=1;
        // ListNode  *  tail=node;
        // while(tail->next){
            
        //     tail=tail->next;
        //     length++;
        // }
        
        //  int index=length-n;
        //  //
        //  taill=tail->next;
        node->val=node->next->val;
        node->next=node->next->next;
    }
};