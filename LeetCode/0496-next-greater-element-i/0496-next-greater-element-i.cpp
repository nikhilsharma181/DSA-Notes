class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          stack<int> st;
           unordered_map<int,int>    ump;
       
              for(int    j=nums2.size()-1;j>=0;j--){
                  int    x=nums2[j] ;
                   while(!st.empty()    &&   st.top() <= x){
                    st.pop();
                   }
                      ump[x] = st.empty() ? -1 : st.top();
                      st.push(x);
              }
              vector<int> ans;
        for (int num : nums1) {
            ans.push_back(ump[num]);
        }
        return    ans;





        }
    
};