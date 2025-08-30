
// | Operation  | Code          | Effect            |                 |
// | ---------- | ------------- | ----------------- | --------------- |
// | Check bit  | x & (1<<b)  | True if bit b = 1 |                 |
// | Set bit    | `x           | (1<\<b)\`         | Makes bit b = 1 |
// | Clear bit  | x & ~(1<<b) | Makes bit b = 0   |                 |
// | Toggle bit | x ^ (1<<b)  | Flips bit b       |                 |
// | Lowbit     | x & -x      | Rightmost 1       |                 |



class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res,curr,curr2;
    int n = arr.size();
    
    for (int i :arr) {
        curr2 = {i};
         for( auto j  : curr){curr2.insert(i|j);}
         curr=curr2;
          for( auto j  : curr){res.insert(j);}

        
    }
    
    return res.size();
        
    }
};