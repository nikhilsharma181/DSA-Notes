class Solution {
public:
    int totalNumbers(vector<int>& digits) {
         unordered_set<int> num;
    int n = digits.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i != j && j != k && i != k) {
                    if (digits[i] != 0) {          // hundreds place cannot be 0
                        if (digits[k] % 2 == 0) {  // units place must be even
                            int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                            num.insert(number);    // store unique numbers
                        }
                    }
                }
            }
        }
    }

    return num.size();

        
    }
};