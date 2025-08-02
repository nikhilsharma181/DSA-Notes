class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      
          int  arrsize2=arr2.size();
       
         
  vector<int>result;
  vector<int> visited(arr1.size(),0);
   
   for(int   j=0;j<arrsize2;j++){
     
    for(   int  i=0;i<arr1.size();i++ ){
        
                      if(arr1[i]==arr2[j]){
                         result.push_back(arr1[i]);
                           visited[i]=1;
                         
                         
                         

  
                         
                         

                      }
                      
   }
   
   }
  vector<int>notfound;
     for  (int  i=0;i<visited.size();i++){
        if(visited[i]==0){
             notfound.push_back(arr1[i]);
        }
     }
      sort(notfound.begin(),notfound.end());
       for(int  i=0;i<notfound.size();i++){
         result.push_back(notfound[i]);
       }


   return result;





    }
};
