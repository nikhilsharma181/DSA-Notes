class Solution {
    
      bool canmaxsum(int n, int index, int maxSum, int m) {
    long left = 0;
if (index >= m - 1) {
    left = (long)(m - 1) * m / 2;
    left += index - (m - 1);
} else {
    left = (long)index * (2 * m - index - 1) / 2;
}




long right = 0;
int remaining = n - index - 1;
if (remaining >= m - 1) {
    right = (long)(m - 1) * m / 2;
    right += remaining  - (m - 1);
} else {
    right = (long)remaining * (2 * m - remaining - 1) / 2;
}

long total = left + right + m;
return total <= maxSum;


}
public:
    int maxValue(int n, int index, int maxSum) {
           
                int start, end=maxSum,mid,ans;
                start=1 , ans=1;
                  while(start<=end){
                      mid=(start+end+1) /2;
                        if(  canmaxsum(n,index,maxSum,mid) ){
                       start=mid+1;;
                        ans=mid;

                      }
                      else{
   end=mid-1;
                      }
                  }
                   return  ans;

             
    }
};