class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::unordered_map<int,vector<int>> groupBuilding;
        
        vector<vector<int>> groups;
        
        for(int i = 0; i<groupSizes.size(); i++){
            groupBuilding[groupSizes[i]].push_back(i);
            
            //Clean groupBuilding and add to final groups
            if(groupBuilding[groupSizes[i]].size() == groupSizes[i]){
               
                groups.push_back(groupBuilding[groupSizes[i]]);
                groupBuilding[groupSizes[i]] = vector<int>();
            }
            
        } 
       
        return groups;
    }
};