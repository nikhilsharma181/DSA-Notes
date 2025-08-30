class Solution {
     int  numberofprimes(int n){
         int count=0;
           vector<int>prime(n,1);
           prime[0]=prime[1]=0;
          for(int  i=2; i*i <n;i++){
            if(prime[i]){

                  
            for(int   j=i*i; j<n ;j+=i){
                 
                  prime[j]=0;
            }
            }
          }
            return std:: count(prime.begin(),prime.end(),1);

     }
public:
    int countPrimes(int n) {
        return     n<=1 ?false:numberofprimes(n);
    }
};