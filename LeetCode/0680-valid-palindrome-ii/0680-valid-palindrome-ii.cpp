class Solution {
    bool validpalindrome(string& s,int left,int right){
        
        while(left<=right){
             if(s[left++]!=s[right--]){
                return   false;

             }
        }
        return true;

    }
public:
    bool validPalindrome(string s) {
         if(validpalindrome(s,0,s.size()-1)){
            return  true;
         }
          int   left=0,right=s.size()-1;
            while(left<right){
                  if(s[left]==s[right]){
                    ++left;
                    --right;
                  }
                  else{
                    return validpalindrome(s,left+1,right) || validpalindrome(s,left,right-1);
                  }
            }
        return false ;
    }
};