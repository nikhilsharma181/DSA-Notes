class Solution {
     int  countuniqueK(vector<int>nums,int k){
       unordered_map<int,int>mp;
        int left=0,right=0,count=0;
        for( right=0;right<nums.size() ;right++){
            mp[nums[right]]++;
            for(;mp.size()>k ;){
                 mp[nums[left]]--;
               
                    if(mp[nums[left]]==0){
                        mp.erase(nums[left]);
                        

                    }
                    left++;
            }
                  count+=right-left+1;

            }
        
        return count;
     }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return countuniqueK(nums,k)-countuniqueK(nums,k-1);
        
    }
};