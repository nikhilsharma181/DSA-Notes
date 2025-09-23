class Solution {
    // void  recrusive

public: 
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int  start=0;
          int totalgas=0,currentcapacity=0;
           int n=gas.size();
       for(int  i=0;i<n ;i++){
         totalgas=totalgas-cost[i]+gas[i];
        currentcapacity += gas[i] - cost[i];
        
          if(currentcapacity <0){
           start=i+1;
           currentcapacity=0;

          }
       }
        if (totalgas >= 0){
    return start;
        }

    return -1;

       
    } 
};
