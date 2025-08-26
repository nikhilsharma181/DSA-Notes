class   MyCircularQueue {
    private:
      vector<int> circular;
       int front,rear,k;
   public:
    MyCircularQueue(int k){
     this->k=k;
        circular.resize(k,0); front=-1;rear=-1;

    }
    public: int Front(){
          if(!isEmpty()){
             return circular[front];
          }
          return  -1;
    }
    public: int Rear(){
          if(!isEmpty()){
            
            return  circular[rear];
          }
          return  -1;    
    }
    public: 
    bool enQueue(int value){
          if(isFull()){
            return false;
          }
          
           
            if(isEmpty()){
                front=0;
                rear=0;
                
              

            
             circular[rear]=value;
             return true;
            }
           
              
        
       if(rear+1!=front  &&  rear <k-1){
        
          ++rear;

            
             circular[rear]=value;
             return true;


       }
         
              if(rear==k-1 &&
                   front !=0){
                   
                     rear=0;
                    

                        circular[rear]=value;
                         return true;
                             
                         

                     
                    
                  }
            
                    
                  
              

          
          
         return false;

    }
  public:bool deQueue(){
      if (isEmpty()) {
        return false; 
    }

    
    if (front == rear) {
        circular[front] = 0;
        front = -1;
        rear = -1;
        return true;
    }

    circular[front] = 0;
    if (front < k - 1) {
        front++;
    }
    
    else {
        front = 0;
    }

    return true;
 }
  public:bool isEmpty(){
     if(front==-1 ){
   return true;
     }
     return false;
 }
  public:bool isFull(){
    //cricular  queue
    return ((front == 0 && rear == k - 1) || (rear + 1 == front));

 }


};


