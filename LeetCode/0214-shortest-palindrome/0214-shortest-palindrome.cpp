class Solution {
public:
    string shortestPalindrome(string s) {
        string revS = s;
        reverse(revS.begin(), revS.end());
        string temp = s + "#" + revS; // Combine with a separator
        
        // Build the LPS array
        vector<int> lps(temp.size(), 0);
        for (int i = 1; i < temp.size(); ++i) {
            int j = lps[i - 1];
            while (j > 0 && temp[i] != temp[j]) {
                j = lps[j - 1];
            }
            if (temp[i] == temp[j]) {
                ++j;
            }
            lps[i] = j;
        }
        
        // Use LPS to construct the result
        int prefixLen = lps.back(); // Longest prefix matching suffix
        return revS.substr(0, s.size() - prefixLen) + s;
    }
};
//   s='aacecaaaa'
