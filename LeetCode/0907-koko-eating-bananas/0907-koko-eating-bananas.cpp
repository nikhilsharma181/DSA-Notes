class Solution {
      bool  capacity( vector<int> nums,  int  k,  int max_banana_speed_hrs){
           long long current=0;
            for(int   i=0 ;i<nums.size() ;i++){
                   current+=(nums[i] +k-1)/k;
                   
            }
            return   current <=max_banana_speed_hrs;
      }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         long   long sum_max= accumulate(piles.begin(),piles.end(),0LL);
         long start = 1, end = *max_element(piles.begin(), piles.end());
          long long   k=0,mid;
           while(start<=end){
              mid=start+(end-start) /2;
              if(capacity(piles,mid,h)){
                end=mid-1;
                 k=mid;

              }
                if(!capacity(piles,mid,h)){
                    start=mid+1;

                }
           }
           return k;
           
        
    }
};