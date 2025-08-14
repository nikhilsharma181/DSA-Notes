class Solution {
public:
    int countSubstrings(string s) {
         int n=s.size();
         vector<vector<int>> dp(n, vector<int>(n, 0));

         int counter=0;
         for (int i = 0; i < n; ++i) {
            counter++;
    dp[i][i] = 1;
}
         
       for (int l = 1; l < n; ++l) {
   for (int i = 0; i < n-l; ++i) {
       int j = i + l;
       if (  s[i] == s[j]  && (j-i<=2 || dp[i+1][j-1] == 1)) {
           dp[i][j] = 1;
           counter++;
       } 
   }
}
return  counter; 
    }
};