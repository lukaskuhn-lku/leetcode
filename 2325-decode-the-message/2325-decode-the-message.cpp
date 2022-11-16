class Solution {
public:
    string decodeMessage(string key, string message) {
        std::unordered_map<char, int> mapping;
        
        int count = 0;
        for (char c: key){
            if (c == ' '){
                continue;
            }
            
            if(mapping.find(c) == mapping.end()){
                mapping[c] = count;
                count++;
            }
        }
        
        string result = "";
        for(char c: message){
            if(c == ' '){
                result += ' ';
                continue;
            }
            
            int pos = mapping[c];
            result += char(pos + 'a');
        }
        

        return result;
    }
};