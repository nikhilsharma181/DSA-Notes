class Solution {
      
       public:  
    long long subArrayRanges(vector<int>& nums) {
          int  m=nums.size();

          long long   totalsubarray=0;
            stack<int>st;
   vector<int>nextgreater(m,m),nextsmaller(m,m),prevgreater(m),prevsmaller(m);
for(int    j=0;j<nums.size();j++){
  int  x=nums[j];
        while(!st.empty()    &&   nums[st.top()] < x){
                    st.pop();
                   }
                      prevgreater[j] = st.empty() ? -1 : st.top();
                      st.push(j);
        
    }
      st = stack<int>();
    for(int    j=nums.size()-1;j>=0;j--){
        int  x=nums[j];

        while(!st.empty()    &&   nums[st.top()] <= x){
                    st.pop();
                   }
                      nextgreater[j] = st.empty() ? m : st.top();
                      st.push(j);
        
    }
      st = stack<int>();
    for(int    j=0;j<nums.size();j++){
    int  x=nums[j];
        while(!st.empty()    &&   nums[st.top()] > x){
                    st.pop();
                   }
                      prevsmaller[j] = st.empty() ? -1 : st.top();
                      st.push(j);
        
    }
      st = stack<int>();
    for(int    j=nums.size()-1;j>=0;j--){
    int  x=nums[j];
        while(!st.empty()    &&   nums[st.top()] >= x){
                    st.pop();
                   }
                      nextsmaller[j] = st.empty() ? m : st.top();
                      st.push(j);
        
    }

long long maxmum = 0, minimum = 0;
for (int i = 0; i < m; i++) {
    maxmum += (long long)nums[i] * (i -prevgreater[i]) * (nextgreater[i] - i);
    minimum += (long long)nums[i] * (i - prevsmaller[i]) * (nextsmaller[i] - i);
}
return maxmum - minimum;

// for (int i = 0; i < m; i++) {
//          long long maxmum= (long long)(i-prevgreater[i]) *(nextgreater[i]-i);
//         long long  minimum=(long long)(i-prevsmaller[i]) *(nextsmaller[i]-i);
//          totalsubarray+=nums[i] *(maxmum-minimum);

// }
//  return  totalsubarray;

    }





};