class Solution {

    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) return false;
        return true;
    }

    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        
        unordered_map<string,vector<string>> ump;
        for(int   i=0;i<strs.size() ;i++){
            string  re=strs[i];
           sort(re.begin(),re.end());
            //sort(strs.begin()+i+1,strs.end());
            ump[re].push_back(strs[i]);
              }
              for(auto &[key,values] :ump){
                result.push_back(values);
              }

            
             
        
        return result;
    }
};