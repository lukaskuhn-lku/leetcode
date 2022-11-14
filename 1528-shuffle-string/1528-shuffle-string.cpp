class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> letters(indices.size());
                
        for(int i=0; i<indices.size(); i++){        
            letters[indices[i]] = s[i];
        }
        
        std::string shuffled;
        for (char c: letters) {
            shuffled.push_back(c);
        }
        
        return shuffled;
    }
};