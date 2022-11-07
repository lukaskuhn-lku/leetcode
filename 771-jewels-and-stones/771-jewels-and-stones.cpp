class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::unordered_map<char, bool> jewelsFound;
        
        for(int i = 0; i<jewels.size(); i++){
            if(jewelsFound.find(jewels[i]) == jewelsFound.end()){
                jewelsFound[jewels[i]] = true;
            }   
        }
        
        int stonesCount = 0;
        for(int i = 0; i<stones.size(); i++){
            if(jewelsFound.find(stones[i]) != jewelsFound.end()){
                stonesCount++;
            }   
        }
        
        return stonesCount;        
    }
};