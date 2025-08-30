class Solution {
     double  binarytodecimal(string  s){
        //101=5
        //100 =4
        //1000000 =64
          int result = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            result += pow(2, s.size() - 1 - i);
        }
    }
   
   
    return result;
     }
     string  reversestring(string   s){
         int  n=s.size()/2;
         for(int  i=0;i< n;i++){
            //abcde
            //ebcda
            //edcba
            swap(s[i],s[s.size()-1-i]);
         }
         
         return  s;

     }
      string decimaltobinary( int number){
          string res="";
            while(number>0){
                 res=(number%2==0?"0":"1")+res;
                 number/=2;
            }

            while (res.size() < 32) res = "0" + res;
            return res;
      }
public:
    int reverseBits(int n) {
         string   s=decimaltobinary(n);
          string rev=reversestring(s);
           return int(binarytodecimal(rev));
        
    }
};