class Solution {
public:
    int compareVersion(string version1, string version2) {
        string  number1="",number2="";
         int  a=0,b=0;
        for(int   i=0,j=0;i<version1.size()   ||  j< version2.size();i++,j++){
            while(i<version1.size()   &&  version1[i]!='.'){
                a=a*10+(version1[i++]-'0');
            }
            while(j<version2.size()   &&  version2[j]!='.'){
                b=b*10+(version2[j++]-'0');
            }
              if(a<b){ return   -1;
                              }
                              else  if(b<a){return  1;

                              }
                              a=0;
                              b=0;
          
}
        
        //  }
        return  0;
        
    }
};