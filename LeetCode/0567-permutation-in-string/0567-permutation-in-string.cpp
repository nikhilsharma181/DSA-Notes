class Solution {
      
public:
    bool checkInclusion(string s1, string s2) {
        
      int  n=s1.size();
      vector<int> fr1(26,0),fr2(26,0);
      for(int   i=0;i<s1.size();i++){
        fr1[s1[i]-'a']++;

      }
       for(int   j=0;j<s2.size();j++){
          fr2[s2[j]-'a']++;
            if(j>=s1.size()){
          fr2[s2[j-s1.size()]-'a']--;
            }
             if(fr1==fr2){
                return true;
             }
       }
       return false;
     
    }
     
};