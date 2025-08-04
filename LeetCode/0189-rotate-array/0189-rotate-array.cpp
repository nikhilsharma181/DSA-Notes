class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int  n=nums.size();
          k=k %n;

         reverse(nums.begin(),nums.end());
         reverse(nums.begin(),nums.begin()+k);
         reverse(nums.begin()+k,nums.end());
    }
};

// [12,3,4,8,9]  k=4
// [3,4,8,9,12]