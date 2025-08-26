class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
   queue<int>qu;
    vector<int>result(deck.size());

        sort(deck.begin(),deck.end());
          for(int      i=0;i<deck.size() ;i++){
            qu.push(i);
          }
         
         
                for( auto  card :deck){
                       int  value=qu.front();
                       qu.pop();
                       result[value]=card;
                         if(!qu.empty()){
                              int val= qu.front();
                              qu.push(val);
                             qu.pop();

                         }
                }
                return   result;
    }
};