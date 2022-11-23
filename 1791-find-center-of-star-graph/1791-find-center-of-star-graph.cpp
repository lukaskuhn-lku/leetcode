class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        std::unordered_map<int, bool> edgeCount;
        
        for (int i = 0; i<edges.size(); i++){
           if(edgeCount.find(edges[i][0]) != edgeCount.end()){
               return edges[i][0];
           }else if(edgeCount.find(edges[i][1]) != edgeCount.end()){
               return edges[i][1];
           }else{
               edgeCount[edges[i][0]] = true;
               edgeCount[edges[i][1]] = true;
           }
        }
        
        return 0;
    }
};