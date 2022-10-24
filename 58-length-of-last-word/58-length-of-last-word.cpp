class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int startLastWord = 0;
        int endLastWord = 0;
        bool spaces = true;
        for (int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                if(!spaces){
                    spaces = true;
                    endLastWord = i;
                }
            }else{
                if(spaces){
                   startLastWord = i;
                   spaces = false;
                }
            }
        }
        
        if(!spaces){
            endLastWord = s.length();
        }
        
        std::cout << startLastWord << "|" << endLastWord << std::endl;
        
        return endLastWord - startLastWord;
    }
};