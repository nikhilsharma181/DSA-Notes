
class Solution {
public:
    long long mergeSortAndCount(vector<long long>& diffArray, int left, int right, int diff) {
        if (left >= right) return 0;

        int mid = left + (right - left) / 2;
        long long count = mergeSortAndCount(diffArray, left, mid, diff) + 
                          mergeSortAndCount(diffArray, mid + 1, right, diff);

 
int j = mid + 1;
for (int i = left; i <= mid; i++) {
    while (j <= right && diffArray[j] < diffArray[i] - diff) {
        j++;
    }
    count += (right - j + 1);
}


        vector<long long> temp(right - left + 1);
        int i = left, k = 0;
        j = mid + 1;
        while (i <= mid && j <= right) {
            if (diffArray[i] <= diffArray[j]) {
                temp[k++] = diffArray[i++];
            } else {
                temp[k++] = diffArray[j++];
            }
        }
        while (i <= mid) temp[k++] = diffArray[i++];
        while (j <= right) temp[k++] = diffArray[j++];

        for (int i = left; i <= right; i++) {
            diffArray[i] = temp[i - left];
        }

        return count;
    }

  

    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        int n = nums1.size();
        vector<long long> diffArray(n);
        for (int i = 0; i < n; i++) {
            diffArray[i] = (long long) nums1[i] - (long long) nums2[i];
        }

        return mergeSortAndCount(diffArray, 0, n - 1, diff);
    }
};