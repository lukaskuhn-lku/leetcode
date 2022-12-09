class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        int maxId = 0;
        int maxTime = 0;
        
        int previousStartTime = 0;
        
        for(int i = 0; i<logs.size(); i++){
            
            int timeTaken = logs[i][1] - previousStartTime;
            
            
            if(timeTaken >= maxTime){
                if(timeTaken == maxTime){
                    if(maxId > logs[i][0]){
                        maxId = logs[i][0];
                        maxTime = timeTaken;
                    }
                }else{
                       maxId = logs[i][0];
                       maxTime = timeTaken;
                }
            }          
            
            
            
            
            previousStartTime = logs[i][1];
        }
        
        
        return maxId;
    }
};