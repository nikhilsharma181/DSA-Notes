class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        //sorted  binary search option lg skta h
        //nums =[1,3]
       // [1,3]  n=6
      long long miss = 1;
        int patches = 0;
         int index = 0;

        while (miss <= n) {
            if ( index < nums.size() && nums[index] <= miss) {
                miss += nums[index];
                index++;
            } else {
                miss += miss;
                patches++;
            }
        }

        return patches;
             

         }
    
};