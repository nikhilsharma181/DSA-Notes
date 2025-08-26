class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int  length=nums.size();
          int flag1=false;
         int flag2=false;
           int count=0;
          
           int prev=-1;
          vector<int>result={-1,-1};
           for(int  i=0;i<nums.size() ;i++){
                if(nums[i]==target  &&  flag1==false){
                    result[0]=i;
                    flag1=true;
                      prev=i;
                        ++count;
                          

                    
                }
                else  if((nums[i]==target)   &&  (prev<i)   ){
                     result[1]=i;
                     ++count;
                
                    
                      
                     
                }
           }
            if(count==1  && result[0]!=-1){ result[1]=result[0];}
            if(count==1  && result[0]!=-1){ result[0]=result[1];}
              
        
           return  result;
        
    }
};