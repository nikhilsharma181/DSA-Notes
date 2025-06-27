class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
       mp['I']=1;
       mp['V']=5;
       mp['X']=10;
       mp['L']=50;
       mp['C']=100;
       mp['D']=500;
       mp['M']=1000;
       int  curr, nextnum;
       int res=0;
       for(int i=0;i<s.size();i++){
         curr=mp[s[i]];
         nextnum=i+1<s.size()?mp[s[i+1]]:0;
         if(curr<nextnum){
            res+=nextnum-curr;
            ++i;

         }
         else
         {
            res+=curr;
         }
       }
       return  res;
        
    }
};