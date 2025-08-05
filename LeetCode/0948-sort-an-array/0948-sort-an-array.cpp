class Solution {
      void  merge(vector<int>&nums,int  left, int mid,int right){
         vector<int>L(mid+1-left),R(right-mid);
          int  i=0,j=0;

            for(int  i=0;i<L.size();i++){
                L[i]=nums[left+i];
            }
            for(int  j=0;j<R.size();j++){
                R[j]=nums[mid+j+1];
            }

  int   k=left;
          while( i <L.size()  &&   j <R.size() ){
              if(L[i]<=R[j]){
                 
                nums[k]=L[i];
                i++;
                k++;
              } 
              else{
                nums[k]=R[j];
                k++;
                j++;

              }
          }
          
            while( i<L.size()){
                 nums[k]=L[i];
                 k++;
                 i++;
            }
            while( j<R.size()){
                 nums[k]=R[j];
                 k++;
                 j++;
            }
      }
     void  mergesortArray(vector<int>&nums,  int  start, int  end){
           if(start>=end){
            return;
           }
          int  mid=(start+end)/2;

        mergesortArray(nums,start,mid);
        mergesortArray(nums,mid+1,end);
        merge(nums,start,mid,end);
     }
public:
    vector<int> sortArray(vector<int>& nums) {
          int  n=nums.size();
          mergesortArray(nums,0,n-1);
        return  nums;

    }
};