class Solution {
public:
    int countPoints(string rings) {
     
        std::vector<std::vector<bool>> rods;
        
        for(int i=0; i<10; i++){
            vector<bool> ins = {false, false, false};
            rods.emplace_back(ins);
        }
        
        
        for(int i=0; i<rings.size(); i+=2){
            
            char color = rings[i];
            int position = rings[i+1] - '0';
            
            if(color == 'R'){
                rods[position][0] = true;
            }
            
            if(color == 'B'){
                rods[position][1] = true;
            }
            
            if(color == 'G'){
                rods[position][2] = true;
            }
        }
        
        
        int sum = 0;
        for(int i = 0; i<10; i++){
            if(rods[i][0] && rods[i][1] && rods[i][2]) sum += 1;
        }
        
        return sum;
    }
};