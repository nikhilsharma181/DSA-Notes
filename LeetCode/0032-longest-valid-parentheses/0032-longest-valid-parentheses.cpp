class Solution {   

        int    validParenthesis( string   s ){
            //stack   check kr sket h kya
            //order  matters 
            stack<int> st;
            st.push(-1);
             int ans=0;
            for (int i = 0; i < s.length(); i++) {
        
        
        if (s[i] == '(') {
            st.push(i);
        } else {
            
            
            st.pop();

           
            if (st.empty()) {
                st.push(i);
            } else {
                
                
                ans = max(ans, i - st.top());
            }
        }
            }
            return ans;
    }
    //dp  solution





// bool validParenthesis(const string &s) {
//     int bal = 0;
//     for (char c : s) {
//         if (c == '(') bal++;
//         else {
//             bal--;
//             if (bal < 0) return false;
//         }
//     }
//     return bal == 0;
// }
    

    
public:
    int longestValidParentheses(string s) {
          
           
            
        
                    
         return  validParenthesis(s);
    }
};