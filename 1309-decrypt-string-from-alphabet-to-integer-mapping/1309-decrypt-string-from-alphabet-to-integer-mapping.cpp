class Solution {
public:
    std::unordered_map<int, char> mapping;
    
    string freqAlphabets(string s) {
        
        char c;

        //Create mapping for characters
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
                //Number >= 10
                std::string number;
                number += s[i-2];
                number += s[i-1];
                                
                int num = std::stoi(number);
                res += mapping[num];
                
                i = i-2;
            }else{
                //Number < 10
                std::string number;
                number += s[i];
                
                int num = std::stoi(number);
                res += mapping[num];
            }
        }
        
        //Reverse the String before returning
        std::reverse(res.begin(), res.end());
        return res;
    }
};