class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
      for( auto ch :s){
        mp[ch]++;

      } 
      vector<pair<char, int>> vec(mp.begin(), mp.end());
      sort(vec.begin(),vec.end(),[](auto  &a, auto  &b){return  a.second >b.second;});
       string res="";
      for( auto p:vec){
        cout<<p.first<<"\t"<<p.second;
        while(p.second){
        res+=p.first;
        --p.second;
        }
      }
      return  res;
    }
};