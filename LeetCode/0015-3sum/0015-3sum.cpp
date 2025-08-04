
      class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
         vector<vector<int>> result;
        sort(nums.begin(),nums.end());
         int  left , right;
         for(int  i=0;i<n-2;i++){
              if ( i > 0 and nums[i]==nums[i-1]){
                continue;
              }
                left=i+1;
                right=n-1;
                 while(left<right){

                     if(nums[i]+nums[left]+nums[right]==0){
                         result.push_back({nums[i],nums[left],nums[right]});
                         while (left < right and nums[left] == nums[left + 1]){
                    left += 1;
                        }
                while (left < right and nums[right] == nums[right - 1]){
                    right -= 1;
                      
                 
                 }
                  left+=1;
                  right-=1;
                     }

                     
                      else  if(nums[i]+nums[left]+nums[right]<0){
                         left+=1;
                      }
                      else{
                        right-=1;
                      }
                 }
         }
                        
               
         return result;
        
    } 
};
