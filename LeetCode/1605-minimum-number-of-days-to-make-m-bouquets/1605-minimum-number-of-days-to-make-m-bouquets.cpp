bool canMakeflowerset(vector<int>& nums, int m, int k, int day) {
    
    int bouquets = 0, flowers = 0;

   
    for (int i = 0; i < nums.size(); i++) {
      
        if (nums[i] <= day) {
            flowers++;
           
            if (flowers == k) {
                bouquets++;
                flowers = 0; 
            }
        } else {
            flowers = 0; 
        }
    }

    
    return bouquets >= m;
}

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start =*min_element(bloomDay.begin(),bloomDay.end())  ;
    int end =*max_element(bloomDay.begin(),bloomDay.end())  ;
      int  ans=0 ;//days needed
      int mid;
         long long totalFlowers = (long long)m * k;

   if (bloomDay.size() < totalFlowers) {return -1;}
   
       while(start<=end){
          mid=start+(end-start) /2;
          if(canMakeflowerset(bloomDay,m,k,mid)){
              ans=mid;
   end = mid - 1;
          }
          else  if(!canMakeflowerset(bloomDay,m,k,mid)){
            start = mid + 1;
          }
       }
        return   ans;
    }
};