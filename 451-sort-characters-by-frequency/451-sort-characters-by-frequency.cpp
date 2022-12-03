class Solution {
public:
    string frequencySort(string s) {
        std::unordered_map<char, int> letters;
        
        for(char c: s){
            letters[c] += 1;
        }
        
        std::string res;        
        
        std::vector<std::pair<char,int>> values(letters.begin(),letters.end());
        auto cmp = [](const std::pair<char,int>& l, std::pair<char,int>& r) { return l.second > r.second;};
        std::sort(values.begin(),values.end(),cmp);
        
        
        for(std::pair<char,int> p: values){
            
            for(int k = 0; k<p.second; k++){
                res += p.first;
            }
        }
        
        return res;
    }
};