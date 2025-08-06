class Solution {
   
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        
        for (auto& q : queries) {
    int row1 = q[0], col1 = q[1], row2 = q[2], col2 = q[3];
    mat[row1][col1] += 1;
    if (row2 + 1 < n){ mat[row2 + 1][col1] -= 1;}
    if (col2 + 1 < n){ mat[row1][col2 + 1] -= 1;}
    if (row2 + 1 < n && col2 + 1 < n) {mat[row2 + 1][col2 + 1] += 1;}
}
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i > 0) {mat[i][j] += mat[i - 1][j];}
        if (j > 0){ mat[i][j] += mat[i][j - 1];}
        if (i > 0 && j > 0) {mat[i][j] -= mat[i - 1][j - 1];}
    }
}
return mat;
    }
};