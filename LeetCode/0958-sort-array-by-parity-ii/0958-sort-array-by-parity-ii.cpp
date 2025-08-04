class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        //swapping
         int  n=nums.size();
          int count=0;
          for(int  i=0;i<n;i++){
             if( i%2 ==0   && nums[i]%2 !=0){
                 int j=i+1;
                 while(  j <n){
                     
                     
                       if(nums[j]%2==0){
                        swap(nums[i],nums[j]);
                       count++;
                       break;}
                     
                     j++;
                 }
                  
             }

             else if(i%2 !=0   && nums[i]%2 ==0){
                int j=i+1;
                 while(  j <n){
                     
                     
                       if(nums[j]%2!=0){
                        swap(nums[i],nums[j]);
                       count++;
                       break;}
                     
                     j++;
                 }

             }
          }
          return nums;

    }
};