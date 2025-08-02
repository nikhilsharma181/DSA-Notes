class Solution {
public:
    int maximumGap(vector<int>& nums) {
        //sorting
         if(nums.size()<2){
            return 0;
         }
        vector<int> result;
         
       map<int,int> count;
          for(int  num:nums){
              count[num]++;
          }
           for( auto &[key,value]:count){
            while(value>0){
                result.push_back(key);
                count[key]--;

            }
              
           }
           
           
          for(int  i=0;i<result.size();i++){
            cout<<result[i]<<"\t";
               
          } 
           int  maxdiff=INT_MIN;
            for(int  i=0;i<result.size()-1;i++){
                 
                  if(abs(result[i]-result[i+1])>maxdiff){
                    maxdiff=max(maxdiff,abs(result[i]-result[i+1]));
                  }
            }
          return  maxdiff;

    } 

        
    
};
 