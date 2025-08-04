class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int windowstart = 0 ; 
        int maxfruits = 0 ; 
        unordered_map<int,int>fruitfrequency;

        for(int windowend = 0 ; windowend<fruits.size();windowend++){
            int left = fruits[windowend];

            fruitfrequency[left]++;

        
        while(fruitfrequency.size()>2){
            int lowfruit = fruits[windowstart];

            fruitfrequency[lowfruit]--;

            if( fruitfrequency[lowfruit]==0 ){
                fruitfrequency.erase(lowfruit);

            }

            windowstart++;
        }
            maxfruits = max(maxfruits , windowend - windowstart +1 );
        }
        return maxfruits;
    }
    
};
