class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int reverseIdx = -1;
        for(int i = 0; i<word.size(); i++){
            if(reverseIdx != -1) break;
            
            if(word[i] == ch){
                reverseIdx = i;
            }
        }
        

        if(reverseIdx != -1){
            std::string first = word.substr(0, reverseIdx+1);
            std::string second = word.substr(reverseIdx+1, word.size()-reverseIdx-1);
            
            std::string res;
            
            for(int j = first.size()-1; j >= 0; j--){
                res += first[j];
            }
            
            res+= second;
            
            return res;
        }
        
        return word;
    }
};