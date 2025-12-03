#include <numeric>
class Solution {
    //substring
    //prime
    
bool isPrime(long long n) {
    if(n <= 1) return false;     
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0) return false;  

    long long sqrtN = sqrt(n);
    for(long long i = 3; i <= sqrtN; i += 2) { // check only odd divisors
        if(n % i == 0)
            return false;
    }
    return true;
}
public:
    long long sumOfLargestPrimes(string s) {
         set<long long>temp;
        for(int  i=0;i<s.size();i++){
            for(int   j=i;j<s.size();j++)

            {      long long  valid=stoll(s.substr(i,j-i+1));
                 if(isPrime(valid)){
       temp.insert(valid);
            }
       

            }


        }
          vector<long long> unique(temp.begin(), temp.end());
        sort(unique.begin(), unique.end(), greater<long long>());
        //sum  of  three  values
         int  count=min((int)unique.size(),3);
         
          
       return  accumulate(unique.begin(),unique.begin()+count,0LL);
          



        
    }
};