class Solution {
public:
    bool checkIfPangram(string sentence) {
        int alphabet[26] = {};
        
        for(char c: sentence){
            int idx = c - 'a';
            alphabet[idx] = 1;
        }

        
        for(int i: alphabet){
            std::cout << i << std::endl;
            if(i == 0){ return false; }
        }
        
        return true;
    }
};