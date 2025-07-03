class Solution {
public:
    char kthCharacter(int k) {
        
        string alice="a";
        string result="";
        while(result.size()<=k){
            result+=alice;
            string  temp=alice;
              for(int   i=0 ;i<temp.size();i++){
            temp[i]=char(temp[i]+1);

              }
              alice+=temp;
             
        }
        cout<<alice;
        return alice[k-1];
        
    }
};