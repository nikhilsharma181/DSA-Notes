class Solution {
    //max
      bool  helper(vector<int> nums , int  days_needed, int max_weights){
          int current_sum=0;
           int start_days=1;
          for(int  i= 0; i<nums.size() ;i++){
             current_sum+=nums[i];
              
               if(current_sum > max_weights   ){
               ++start_days;
                current_sum=nums[i];

               }
             
              
          }
            if(start_days > days_needed ){
                 return false;
               }
          return   true;
      }
public:
    int shipWithinDays(vector<int>& weights, int days) {
         int  start=*max_element(weights.begin(),weights.end());
          int end =accumulate(weights.begin(),weights.end(),0);
       
          int mid, ans=0; 
         
         
        

         while(start<=end){
            mid=start+(end-start) /2;
              
           
               if(helper(weights,days,mid )){
                 end=mid-1;
                 ans=mid;

               }
               if(!helper(weights,days,mid)){
                start=mid+1;

               }
              
         }
          
          return   ans;
        
    }
};