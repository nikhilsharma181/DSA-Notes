class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
         int  shift=0;
       while(left<right){
        //collide  when  both  bit  are   same
         left>>=1;
         right>>=1;
         shift++;
       }
         return   right <<shift;
         
        
    }
};