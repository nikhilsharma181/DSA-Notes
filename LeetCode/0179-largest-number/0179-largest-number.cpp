class Solution {
     public:
       static bool comparator(string  a ,string  b){
          return a+b > b+a;
         
     }
public:
    string largestNumber(vector<int>& nums) {
         vector<string>numst;
           string  result="";
           for(int  i=0;i<nums.size() ;i++){
             numst.push_back(to_string(nums[i]));
           }
            sort(numst.begin(),numst.end(),comparator);
             if(numst[0]=="0"){
                return  "0";
             }
            for(int  i=0;i<numst.size() ;i++){
                result+=numst[i];
            }
            
            return result ;

        
    }
};
//  nums =[10,2]
//  nums=[2]
//   nums=[2,3,4,8,90]
//    nums as string