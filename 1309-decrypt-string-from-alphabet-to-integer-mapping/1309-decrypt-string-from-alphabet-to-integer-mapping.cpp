class Solution {
public:
    std::unordered_map<int, char> mapping;
    
    string freqAlphabets(string s) {
        
        char c;

        int counter = 1;
        for(c = 'a'; c <= 'z'; c++) {
            mapping[counter] = c;
            std::cout << counter << "|" << c << std::endl;
            counter++;
        }
        
        
        
        std::string res;
        
        for(int i = s.size()-1; i>=0; i--){
            char c = s[i];
            
            if(c == '#'){
                std::string number;
                number += s[i-2];
                number += s[i-1];
                
                std::cout << number << std::endl;
                
                int num = std::stoi(number);
                res += mapping[num];
                
                i = i-2;
            }else{
                
                std::string number;
                
                std::cout << i << std::endl;
                std::cout << s[i] << std::endl;
                
                number += s[i];
                
                int num = std::stoi(number);
                res += mapping[num];
            }
        }
        
        std::reverse(res.begin(), res.end());
        return res;
    }
};