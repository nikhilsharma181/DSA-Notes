class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int target = total - x;  
        if (target < 0) return -1;  

        int left = 0, currentSum = 0, maxLen = -1;
        for (int right = 0; right < nums.size(); ++right) {
            currentSum += nums[right];

            while (currentSum > target && left <= right) {
                currentSum -= nums[left++];
            }

            if (currentSum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        return maxLen == -1 ? -1 : nums.size() - maxLen;
    }
};