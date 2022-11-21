class Solution {
public:
    int countAsterisks(string s) {
        bool open = false;
        int numberAsterisks = 0;
        
        for(int i = 0; i<s.size();  i++){
            if(s[i] == '|') open = !open;
            
            if(!open){
                if(s[i] == '*'){
                    numberAsterisks++;
                }
            }
            
            
        }
            
        return numberAsterisks;
        
    }
};