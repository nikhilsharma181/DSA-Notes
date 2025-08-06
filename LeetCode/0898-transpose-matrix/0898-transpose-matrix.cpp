class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>res(matrix[0].size(),vector<int>(matrix.size()));
        for(int  i=0;i<matrix.size();i++){
            for(int   j=0;j<matrix[0].size();j++){
                 
                 res[j][i]=matrix[i][j];
                 
            }
        }
        return res;
    }
};

// 2,4,-1
// -10,5,11
// 18,-7,6
// 0,1,2


