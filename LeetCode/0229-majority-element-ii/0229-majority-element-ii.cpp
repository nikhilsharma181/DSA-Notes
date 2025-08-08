class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=floor(nums.size()/3);
          vector<int>res;
        cout<<n<<"\t";
         map<int,int> mp;
         for(int  i=0;i<nums.size();i++){
            mp[nums[i]]++;
         }
      
        
        for(auto item:mp){
            if(item.second>n){
                res.push_back(item.first);
            }
        }
       
        
        return res;
        
    }
};