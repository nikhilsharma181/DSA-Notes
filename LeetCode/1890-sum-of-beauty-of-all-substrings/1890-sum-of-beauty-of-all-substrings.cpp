class Solution {
      int calcualtefreqency(string t){
         vector<int>frq(26,0);
          int min_frq=INT_MAX,max_frq=0;
            if(!t.empty()){
         for(int  i=0;i<t.size();i++){
            frq[t[i]-'a']++;
         }
        

         for(int  i=0 ;i<26;i++){
              if(frq[i] >0){
           min_frq=min(min_frq,frq[i]);
           max_frq=max(max_frq,frq[i]);
              }
         }
            }
           if (min_frq == INT_MAX) {return 0;}; 
         return  max_frq-min_frq; 


        
      }
public:
    int beautySum(string s) {
         int result=0;
        for(int  i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                result+=calcualtefreqency(s.substr(i,j-i+1));
                   
            }
        }
        return result;
    }
};