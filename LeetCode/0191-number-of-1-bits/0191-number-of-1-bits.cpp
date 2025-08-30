class Solution {
     string decimaltoninary(int n){
         string res="";
         while(n>0){
              res=(n%2==0 ?"0":"1")+res;
              n/=2;
         }
         return res;
     }
public:
    int hammingWeight(int n) {
         string   s=decimaltoninary(n);
        int res=0;
         for(int  i=0;i<s.size() ;i++){
             if(s[i]=='1'){
                 res++;

             }
         }
         return  res;
        
    }
};