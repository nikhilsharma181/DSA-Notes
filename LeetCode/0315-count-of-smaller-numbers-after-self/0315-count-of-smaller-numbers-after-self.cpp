class Solution {
    void mergeSort(vector<pair<int, int>>& nums, int left, int right, vector<int>& count) {
    if (right - left <= 0) return;
    int mid = left + (right - left) / 2;
    mergeSort(nums, left, mid, count);
    mergeSort(nums, mid + 1, right, count);

    vector<pair<int, int>> temp;
    int i = left, j = mid + 1;
    int rightCounter = 0;

    while (i <= mid && j <= right) {
        if (nums[i].first <= nums[j].first) {
            count[nums[i].second] += rightCounter;
            temp.push_back(nums[i++]);
        } else {
            rightCounter++;
            temp.push_back(nums[j++]);
        }
    }

    while (i <= mid) {
        count[nums[i].second] += rightCounter;
        temp.push_back(nums[i++]);
    }
    while (j <= right) temp.push_back(nums[j++]);

    for (int k = left; k <= right; ++k)
        nums[k] = temp[k - left];
   
}

public:
    vector<int> countSmaller(vector<int>& nums) {
         int n = nums.size();
    vector<int> count(nums.size(), 0);
vector<pair<int, int>> valIdx;
for (int i = 0; i < n; ++i) {
    valIdx.emplace_back(nums[i], i);
}
mergeSort(valIdx, 0, nums.size() - 1, count);

    return count;
    }
};
// [5,2,6,1]
//   i=0
