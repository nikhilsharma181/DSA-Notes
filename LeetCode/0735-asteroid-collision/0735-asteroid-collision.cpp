class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
          stack<int>  st;
           vector<int> result;
          for(int  i=0;i<asteroids.size();i++){
              if(st.empty() || asteroids[i] >0){
                st.push(asteroids[i]);
              }
              else{
                bool   colided=false;
                  while(!st.empty()  &&  st.top() >0){
                      if(abs(asteroids[i]) > abs(st.top())){
                        st.pop();
                      }
                 

                     
                      else if(abs(st.top())==abs(asteroids[i])){
                        st.pop();
                        colided=true;
                       break;
                      }
                       else {
                        colided=true;
                       break;
                      }
                      

                  }
                       if (!colided && (st.empty() || st.top() < 0)) {
             st.push(asteroids[i]);
             continue;
                      }
                  }
                
              }
          
          while(!st.empty()){
            result.push_back(st.top());
            st.pop();
          }
           reverse(result.begin(),result.end());

           return  result;

          
        
    }
};
//O(n^2)  exists  this  soltuiions

