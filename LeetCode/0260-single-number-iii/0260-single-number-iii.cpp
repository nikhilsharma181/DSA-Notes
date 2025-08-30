class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
          if  (nums.size()<=2){
            return  nums;
          } 
         long long res = 0; 
          for(int  i=0;i<nums.size() ;i++){
             res=res^nums[i];
              
              

              
          }  
          //number   of   set  bit
          // get righmost bit integer range  [-2^31, 2^31 - 1]  use long   long
            int  setbitres=res  & -res;
            cout<<setbitres;
              int number=0,number2=0;
           for(int  i=0;i<nums.size() ;i++){
             if(nums[i]  & setbitres){
                number^=nums[i];

             }
             else{
                number2^=nums[i];
             }
         }
         
         
         return  {number,number2};         
        
    }
};