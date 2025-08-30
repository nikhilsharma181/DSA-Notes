class Solution {
     const   long long  mod=1000000007LL;
public:
    int maximumXorProduct(long long a, long long b, int n) {
        //    __int128 ans=-1;
        //    double range=1LL << n;
        //    // mask   1<<n  for maxmum  value reeach   and b  are  closers

        //    for(long long  i=0;i<int(range);i++){
        //     __int128 val = __int128 (a ^ i) * (b ^ i);
            
        //      val %= mod;  // keep val inside mod
        //     ans = std::max(ans, val); 

        //    }
        //    return int(ans%mod);
        //set bit  1  no operation
        //for  increasing  by  1  for decrasing by  1
        // if(a>b){ a^=mask    b |=mask}
          for(int i= n-1 ;i>=0 ;i--){
             long  long masked=(long long)1<<i;
               if((a  & masked )  &&  ( b  & masked)){
                 continue;
               }
                else  if(a & masked){
                      if(a>b){
                    a^=masked;
                    b|=masked;
                      }
                }
                else  if(b & masked){
                      if(a<b){
                  a|=masked; // for  decrment
                    b^=masked;//for incement
                      }
                }
                else{
                    //  incase  both  un masked
                     a|=masked;
                     b|=masked;
                }
             
          
          }
            a=a%mod;
            b=b%mod;
            //98
            //TC -O(n)
            return (1LL * a * b) %mod;

    }
        
  };




























































