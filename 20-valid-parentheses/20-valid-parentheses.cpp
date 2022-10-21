class Solution {
public:
    bool isValid(string s) {
        
        std::stack<char> brackets;
        
        for (int i = 0; i<s.length(); i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                brackets.push(s[i]);
            }
            
            if(s[i] == '}'){
                if(brackets.size() > 0 && brackets.top() == '{'){
                    brackets.pop();
                }else{
                    return false;
                }
            }
            
            if(s[i] == ')'){
                if(brackets.size() > 0 && brackets.top() == '('){
                    brackets.pop();
                }else{
                    return false;
                }
            }
            
            if(s[i] == ']'){
                if(brackets.size() > 0 && brackets.top() == '['){
                    brackets.pop();
                }else{
                    return false;
                }
            }    
        }  
        
        if(brackets.size() == 0){
            return true;
        }
        
        return false;
        
    }
};