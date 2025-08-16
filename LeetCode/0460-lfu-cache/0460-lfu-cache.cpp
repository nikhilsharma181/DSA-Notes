class Node{
    public: int  key,value,frq;
     Node * next, *prev;
     public:Node(int key,int  value){
        this->key=key;
        this->value=value;
        frq=1;
     }
};
class DoublyLinekdList{
    public:
    int  size;
   public: Node  *head,*tail;
 DoublyLinekdList(){
    head=new  Node(0,0);
    tail=new  Node(0,0);
    head->next=tail;
    tail->prev=head;
    size=0;
 }
 void  insertNodeatfirsst(Node  *node){
    Node *tmp=head->next;
    head->next=node;
    node->prev=head;
    node->next=tmp;
    tmp->prev=node;
    size++;

 }
 void removeNode(Node *node){
    Node *delprev =node->prev;
    Node *delnxt=node->next;
    delprev->next=delnxt;
    delnxt->prev=delprev;
    size--;
    

 }
 Node* removeLastNode(){
      if(size==0){
        return NULL;
      }
      Node *last=tail->prev;
      removeNode(last);
    return last;
    


 }
     
    

};





class LFUCache {
   unordered_map<int,Node*>  pq;
   unordered_map<int,DoublyLinekdList*>cache;
    int minfrq,currsize;
    int   capacity=0;

      void  updateFrq(Node *node){
        //pq.erase(node->key);
         int  oldfrq=node->frq;
        cache[node->frq]->removeNode(node);
         if(node->frq==minfrq  && 
            cache[oldfrq]->size==0)
         {
            minfrq++;
         }
         
         DoublyLinekdList  *list=new DoublyLinekdList();
         if(cache.find(node->frq +1)!=cache.end()){
            list=cache[node->frq+1];
         }
         node->frq+=1;
         list->insertNodeatfirsst(node);
         cache[node->frq]=list;
         pq[node->key]=node;

        
           



      }
public:
    LFUCache(int capacity) {
          this->capacity=capacity;
          minfrq=0;
          currsize=0;

    }
    
    int get(int key) {
        //rear
        //front
     
          if(pq.find(key)!=pq.end()){
            Node  *node=pq[key];
            updateFrq(node);
      
            return node->value;
          }

        return  -1;
    }
    
    void put(int key, int value) {
         //remove
           if(capacity==0){
            return;
           }
         if(pq.find(key)!=pq.end()){
                Node  *prev=pq[key];
                prev->value=value;
                   updateFrq(prev);
       
          }
         
        else{
            if(capacity==pq.size()){
                DoublyLinekdList *list = cache[minfrq];
Node *nodeToRemove = list->removeLastNode();
pq.erase(nodeToRemove->key);
delete nodeToRemove;
}

Node *newNode = new Node(key, value);
minfrq = 1;

DoublyLinekdList *list;
if (cache.find(minfrq) != cache.end()) {
    list = cache[minfrq];
} else {
    list = new DoublyLinekdList();
    cache[minfrq] = list;
}

list->insertNodeatfirsst(newNode);
pq[key] = newNode;

 
              
      
        }
        
        
             
            
     

        
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */