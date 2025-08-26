class MyQueue {
    stack<int> st1, st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
        
    }
    
    int pop() {
         while(!st1.empty()){
             st2.push(st1.top());
             st1.pop();
         }
          int val=st2.top();
           st2.pop();
           //insert
            while(!st2.empty()){
             st1.push(st2.top());
             st2.pop();
         }


       return val;
        
    }
    
    int peek() {
        

         //stack to  khali krdo    st2 top bta  do
        while(!st1.empty()){
             st2.push(st1.top());
             st1.pop();
         }
          int val=st2.top();
           
           //insert
            while(!st2.empty()){
             st1.push(st2.top());
             st2.pop();
         }
         return   val;

        
    }
    
    bool empty() {
          if(st1.empty()){
            return  true;
          }
          return  false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */