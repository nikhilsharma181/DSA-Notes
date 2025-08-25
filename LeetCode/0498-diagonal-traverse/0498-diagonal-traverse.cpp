class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> result;
         int   k=mat.size();
         int  m=mat[0].size();
         int  i=0,dir=1,j=0;
        for(;result.size()<k*m;){
            result.push_back(mat[i][j]);
             if(dir==1)
             {  if(j==m-1){
                i++;
                dir=-1;

             }
             else if(i==0){
                j++;
                dir=-1;

             }else{
                i--;
                j++;
             }

             }
             else{
                if(i==k-1){
                j++;
                dir=1;

             }
             else if(j==0){
                i++;
                dir=1;

             }else{
                i++;
                j--;
             }

             }
        }
            
    
        
        return  result;
    }
};