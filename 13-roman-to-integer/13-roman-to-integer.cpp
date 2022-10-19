class Solution {
public:
    std::map<char, int> romans = {
        { 'I', 1 },
        { 'V', 5 },
        { 'X', 10 },
        { 'L', 50 },
        { 'C', 100 },
        { 'D', 500 },
        { 'M', 1000 }
    };

    int romanToInt(string s) {
        
        int sum = 0;
        for(int i = 0; i<s.length(); i++) {

            auto it = romans.find(s[i]);
            
            int value = it->second;
            
            if (s[i] == 'I' && i != s.length()-1){
                if(s[i+1] == 'V' || s[i+1] == 'X'){
                    sum -= value;
                    continue;
                }
            }
            
            if (s[i] == 'X' && i != s.length()-1){
                if(s[i+1] == 'L' || s[i+1] == 'C'){
                    sum -= value;
                    continue;
                }
            }
            
            if (s[i] == 'C' && i != s.length()-1){
                if(s[i+1] == 'D' || s[i+1] == 'M'){
                    sum -= value;
                    continue;
                }
            }
            
            sum += value;
            
        }
        
        return sum;
    }
};