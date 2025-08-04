class Solution {
public:
    string customSortString(string order, string s) {
        //first  find  charcter   whch  are  in another  string
        ///write  permutation
          string result="";
           string noavailable="";
            map<char,int> mp;
            
        for(int  i=0;i<order.size();i++){
           
            for(int  j=0;j<s.size() ;j++){

               if(order[i]==s[j]){
                 result+=s[j];
                 

               }
               
              
            }
              
        }
        for(int   i=0;i<result.size();i++){
                  mp[result[i]]++;
            }
        cout<<result;
          
           for(auto  ch :s){
             
                 
              if(mp.find(ch)==mp.end()){
                result+=ch;
              }
             
                 
                

           }
        return result;
    }
};
// order  all chacter  unique