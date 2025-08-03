class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
    //sort   kr enge 
    //..pair  bnayenege  of index
    int  t=valueDiff;
    int k=indexDiff;

     set<long> window;
    
    
    for (int i = 0; i < nums.size(); i++) {
    
        if (i > k) {
            window.erase(nums[i-k-1]);
        }
        
    
        auto it = window.lower_bound((long)nums[i] - (long)t);
        if (it != window.end() && *it - nums[i] <= t) {
            return true;
        }
        
    
        window.insert(nums[i]);
    }
    return false;
        
    }
};
// 1 1 2 3

// 1 1 1 5 5 9 9 