class Node{
     public :int  val;
     Node  *next;
     Node(int data){
        val=data;
        next=NULL;
     }
};


class MyLinkedList {
    
     Node  *head=NULL;
     
public:
    MyLinkedList() {
        head=NULL;
       
    }
    
    int get(int index) {
        Node  *curr=head;
         int counter=0;
        //zerobased  indexing
          while(curr!=NULL){
            if(index==counter){
                return curr->val;
            }
        
            counter++;
            curr=curr->next;
          }
          return  -1;
        
        
        
    }
    
    void addAtHead(int val) {
        Node*  node=new  Node(val);
         
         node->next=head;
         head=node;

        
    }
    
    void addAtTail(int val) {
        Node*  node=new  Node(val);
        Node  *prev=NULL;
        Node *curr=head;
        if(head==NULL){
            head=node;
            return;
        }

        while(curr!=NULL){
            prev=curr;
            curr=curr->next;

        }
        prev->next=node;
        
    }
    
    void addAtIndex(int index, int val) {
         Node  *curr=head;
         Node  *prev=curr;
         int currentIndex=0;
        //zerobased  indexing 
          if(index==0){
            return addAtHead(val);
            return;
          }

          while(curr!=NULL){
            
          
            if(index==currentIndex){
               Node*  node=new  Node(val);
                 node->next=curr;
                 if(prev!=NULL){prev->next=node;}
                 
                else{
                    head=node;
                }
               
                return;
                
            }
            currentIndex++;
              prev=curr;
            curr=curr->next;
          }
           if(index==currentIndex){
               Node*  node=new  Node(val);
             
                 if(prev!=NULL){prev->next=node;}
                 
                else{
                    head=node;
                }
                //
                return;
                
            }
         
        
    }
    
    void deleteAtIndex(int index) {
         Node  *curr=head;
         Node  *prev=NULL;
         int currentIndex=0;
          while(curr!=NULL){
               if(currentIndex==index){
    if(prev!=NULL){prev->next=curr->next;}
                 
                else{
                    head=curr->next;
                }
                //node->next=curr;
                delete(curr);
                return;


               }
            currentIndex++;
            prev=curr;
            curr=curr->next;
          }
       
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */