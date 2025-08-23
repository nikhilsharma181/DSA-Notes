
//sort kre  rececy fials
        //top  hta  de
//         if (mp.empty()) {
   
//     return -1;
// }
        //  vector<pair<int,int> > v1(mp.begin(),mp.end());

        // sort(v1.begin(),v1.end(),[]( const auto &a,const auto &b){
        //       return   a.second > b.second;});
        // int value=v1[0].first;
        //mp.erase(value);


class FreqStack {
    unordered_map<int,int>mp; 
    unordered_map<int,stack<int>>recent;
      int max_freq=0 ;
public:
    FreqStack() {

        
    }
    
    void push(int val) {
        mp[val]++;
          if(mp[val] > max_freq){
            max_freq=mp[val];
          
          }
            recent[mp[val]].push(val);
        
    }
    
    int pop() {
          if(mp.empty()){
            return -1;
          }
           int   x=recent[max_freq].top();
          recent[max_freq].pop();
            mp[x]--;
              if(recent[max_freq].empty()){
                max_freq--;
              }

        
       
        return  x;
    }
        
    
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */