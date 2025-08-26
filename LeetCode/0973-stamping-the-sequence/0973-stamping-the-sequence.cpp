class Solution {
public:
    bool matchpositions(string &s, string &stamp, int pos) {
        bool can = false;
        for (int i = 0; i < stamp.size(); i++) {
            if (s[pos + i] == '?') continue;
            if (s[pos + i] != stamp[i]) return false;
            can = true; 
        }
        return can;
    }

    vector<int> movesToStamp(string stamp, string target) {
        string s = target;
        vector<int> res;
        int n = target.size();
        bool progress = true;

        while (progress) {
            progress = false;
            for (int i = 0; i <= n - stamp.size(); i++) {
                if (matchpositions(s, stamp, i)) {
                    for (int j = 0; j < stamp.size(); j++) s[i + j] = '?';
                    res.push_back(i);
                    progress = true;
                }
            }
        }

        for (char c : s) if (c != '?') return {}; 
        reverse(res.begin(), res.end());
        return res;
    }
};
 
