class MinStack {
       queue<int> q,qu;
      int min_value=INT_MAX;
public:
    MinStack() {
       
    }
    
    void push(int val) {
          q.push(val);
        int n = q.size();
         
        
        for (int i = 0; i < n - 1; i++) {  
            q.push(q.front());
            q.pop();
        }
    }
    
    void pop() {
       
         //change  minumum
       

    

        q.pop();
       
    }
    
    int top() {
       return q.front(); 
    }
    
    int getMin() {
        min_value = INT_MAX;
    int size = q.size();

    for (int i = 0; i < size; ++i) {
        int val = q.front();
        q.pop();
        if (val < min_value){ min_value = val;}
        q.push(val); 
    }

  

        
    
      return min_value;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */