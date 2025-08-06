class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int  n=nums.size();
        vector<int>output(n,1);
         int  suffix=1;
        for(int  i=1;i<n;i++){
            output[i]=nums[i-1] *output[i-1];
          

        }
        for(int  j =n-1;j>=0;j--){
            output[j]*=suffix;
            suffix*=nums[j];
        }
        return    output;
    }
};
// 1,1,2,6
//  n-1=>3
//  3,2,1,0

