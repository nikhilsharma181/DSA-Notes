class Solution {
public:
    int minimumSwap(string s1, string s2) {
          if(s1==s2){
             return  0;
          }
        //  unordered_map<char,int>mp1,mp2;
        //   int n=s1.size();

        //   for(int  i=0;i<n;i++){
        //     mp1[s1[i]]++;


        //   }
        //   for(int  i=0;i<n;i++){
        //     mp2[s2[i]]++;


        //   }
          // frquency  check
            // for(int  i=0 ;i<nums.size();i++){
            //        if(mp2.find(s1[i])!=mp2.end()){
            //        if(mp2[s1[i]]!=mp1[s1[i]]){
            //          return  -1;
            //        }
            //        }

            // }
            //
             int n = s1.size();
        
        int xyPatterns = 0, yxPatterns = 0;   
        for(int i = 0; i < n; i ++) {
            if(s1[i] == 'x' and s2[i] == 'y') {
                xyPatterns ++;
            }
            else if(s1[i] == 'y' and s2[i] == 'x') {
                yxPatterns ++;
            }
        }

        return ((xyPatterns % 2) == (yxPatterns % 2)) ? ((xyPatterns / 2) + (yxPatterns / 2)) + ((xyPatterns % 2) + (yxPatterns % 2)) : -1;


              
          

        
    }
};