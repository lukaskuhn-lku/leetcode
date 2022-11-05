class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxWords = 0;
        for(int i = 0; i<sentences.size(); i++){
            int wordsInSentence = 1;
            for (int j = 0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    wordsInSentence += 1;   
                }
            }
            
            if(maxWords < wordsInSentence){
                maxWords = wordsInSentence;
            }
        }
        
        return maxWords;
    }
};