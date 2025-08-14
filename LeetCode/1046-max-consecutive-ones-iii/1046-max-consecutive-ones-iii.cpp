class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int left=0,right=0;
         int n=nums.size();
         int  counter=0;
         for(right=0;right<n;right++){
            if(nums[right]==0){
                    k--;
                }
             while(k<0){
           
                
                      if(nums[left]==0){
                        k++;
                      }
                         left++;
                      }
                      counter=max(right-left+1,counter);

                }
               

             
           
             
            
         
         return counter;
        
    }
};