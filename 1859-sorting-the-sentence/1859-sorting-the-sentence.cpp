class Solution {
public:
    string sortSentence(string s) {
        std::unordered_map<int, string> words;
        
        int wordStart = 0;
        int wordEnd = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                wordEnd = i-1;
                char idx = s[i-1];
                int index = idx - '0';
                
                std::string sub = s.substr(wordStart, wordEnd-wordStart);
                words[index] = sub;
                                                
                wordStart = i+1;
            }
        }
        
        //Add last word
        wordEnd = s.size();
        char idx = s[wordEnd-1];
        int index = idx - '0';

        std::string sub = s.substr(wordStart, wordEnd-1-wordStart);
        words[index] = sub;
        
     
        string result = "";
        for(int i=1; i<words.size(); i++){
            result += words[i] + " ";
        }
        
        result += words[words.size()];
        
        return result;
    }
};