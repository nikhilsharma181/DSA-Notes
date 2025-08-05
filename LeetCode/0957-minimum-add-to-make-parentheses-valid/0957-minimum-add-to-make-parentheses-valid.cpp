class Solution {
public:
    int minAddToMakeValid(string s) {
         if(s.empty()){
            return true;
         }
          int  open=0,close=0;
        for(int   i=0;i<s.size();i++){
              if(s[i]=='('){
  open++;
              }
              else if(open >0  && s[i]==')'){
                open--;
              }
              else if(open==0 && s[i]==')'){
                close++;
              }
        }
         
         return open+close;
    }
};
// "()))(("
// open ++
// close --
// -2
// 2