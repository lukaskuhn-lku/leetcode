class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        
        for(int i = 0; i<candies.size(); i++){
            if(candies[i] > maxCandies){
                maxCandies = candies[i];
            }
        }
                
        vector<bool> kidGotMost;
        for(int i = 0; i<candies.size(); i++){
            if((candies[i] + extraCandies) >= maxCandies){
                kidGotMost.push_back(true);
            }else{
                kidGotMost.push_back(false);
            }
        }
        
        return kidGotMost;
    }
};