class MyCircularDeque {
     int     front,rear ,k;
       vector<int>dequeue;
public:
    MyCircularDeque(int k) {
        dequeue.resize(k);
        front=-1;
        rear=-1;
  this->k=k;
        
    }
    
    bool insertFront(int value) { 
         if(isFull()){
            return false;
         }

   //fornt sai  insert
     if(isEmpty()){
        front=0;
        rear=0;
        
             
     }
  else{
    front = (front - 1 + k) % k ;
  }
   dequeue[front]=value;

 
   
   return true;
       
           
          
        }
    
    bool insertLast(int value) {
        if (isFull()) {return false;}

        if (isEmpty()) { 
            front = rear = 0;
        } else {
            rear = (rear + 1) % k;
        }
        dequeue[rear]=value;

        return true;



        
    }
    
    bool deleteFront() {
         if (isEmpty()) {
        return false; 
    }

    
    if (front == rear) {
       
        front = -1;
        rear = -1;
        return true;
     
    }

   
        front=(front+1)   % k ;
    
    
    

    return true;
        
    }
    
    bool deleteLast() {
        // rear sai  delete 
          if(isEmpty()){
            return  false;
          }
          if(rear==front){
             front = rear = -1;
             return true;
          }
          rear=(rear-1 +k)%k;
     
        return true;
        





    }
    
    int getFront() {
          if(isEmpty()){
            return  -1;
          }
        return  dequeue[front];
        
    }
    
    int getRear() {
        if(isEmpty()){
            return  -1;
          }
        return  dequeue[rear];
        
    }
    
    bool isEmpty() {
          if(front==-1 ){
   return true;
     }
     return false;
        
    }
    
    bool isFull() {
           return (rear + 1 ) %k== front;
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */