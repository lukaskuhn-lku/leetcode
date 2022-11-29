class Solution {
public:
    string interpret(string command) {
        
        string result;
        for(int i = 0; i<command.size(); i++){
            char current = command[i];
            
            if(current == 'G'){
                result += "G";
            }
            
            if(current == ')' && command[i-1] == '('){
                result += "o";
            }
            
            if(current == ')' && command[i-1] == 'l'){
                result += "al";
            }
        }
        
        return result;
        
    }
};