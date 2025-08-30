class Solution {
     double powerXandY( double x,long long y){
          double  res=1.0;
          double base=x;
          while(y>0){
              if(y&1){
               res*=base;
              }
                base*=base;
                y=y>>1;// divide by  2  or right shift
          }
          return  res;
         
      }
public:
    double myPow(double x, int n) {
            long long e = n; 
            
           return   e<0?1/ powerXandY(x,-e):powerXandY(x,e);
        
    }
};