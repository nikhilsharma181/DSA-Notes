// struct Trienode{
//     //
//     Trienode* childerns[26];
//      bool leaf;
//      Trienode(){
//         leaf=false;
//         for (int i = 0; i < 26; i++) {childerns[i] = nullptr;}
       
//      }
// };
// class Trie {

//  Trienode*  root;
// public:
//     Trie() {

//          root=new Trienode();

        
//     }
    
//     void insert(string word) {
//          Trienode*  node=root;
//          for(auto ch:word){
//              if(!node->childerns[ch-'a']){
//                 node->childerns[ch-'a']=new  Trienode();
                
//              }
//              node=node->childerns[ch-'a'];
           
//          }
//           node->leaf=true;
         
         

        
//     }
    
//     string search(string word) {
//          Trienode*  node=root;
//         string res="";
//      string  candidate="";
//          for (int i = 0; i < word.size() - 1; i++) { // exclude full string
//             int index = word[i] - 'a';
//             candidate += word[i];
//             if (node->childerns[index] && node->childerns[index]->leaf) {
//                 node = node->childerns[index];
//                 res = candidate; // update longest match
//             } else {
//                 break; // no further match
//             }
//         }
//         return res;
        
//     }
    
//     bool startsWith(string prefix) {
//         //prefix
//      Trienode*  node=root;
//          for(auto ch:prefix){
//              if(!node->childerns[ch-'a']){
//                 return false;
                
               
//              }
//              node=node->childerns[ch-'a'];
//          }
//          return true;
//     }
// };
// string longestPrefix(string s) {
//     int n = s.size();
//     vector<int> lps(n, 0); // longest prefix-suffix
//     for (int i = 1; i < n; i++) {
//         int len = lps[i - 1];
//         while (len > 0 && s[i] != s[len])
//             len = lps[len - 1];
//         if (s[i] == s[len]) len++;
//         lps[i] = len;
//     }
//     return s.substr(0, lps[n - 1]);
// }


class Solution {
public:
   string longestPrefix(string &s) {
    vector<int> dp(s.size());
    int j = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[j])
            dp[i] = ++j;
        else if (j > 0) {
            j = dp[j - 1];
            --i;
        }
    }
    return s.substr(0, j);
}
};