class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        //  int  res=0;
        //     for(int  i=0;i<candidates.size();i++){
        //            res^=candidates[i];
        //     }
        //     return  res>0
            int res = 0;
    for (int b = 0; b < 32; b++) {
        int cnt = 0;
        for (int x : candidates) {
            if (x & (1 << b)) cnt++;
        }
        res = max(res, cnt);
    }
    return res;
        
    }
};