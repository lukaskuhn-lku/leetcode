class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        
        std::unordered_map<char, int> wordmap1;
        std::unordered_map<char, int> wordmap2;
        
        for(int i = 0; i<word1.size(); i++){
            wordmap1[word1[i]] += 1;
            wordmap2[word2[i]] += 1;
        }
        
        std::vector<int> count1, count2;
        for (std::pair<char, int> element : wordmap1)
        {
            if (wordmap2.find(element.first) == wordmap2.end()) return false;
            count1.emplace_back(element.second);
        }

        
        for (std::pair<char, int> element : wordmap2)
        {
            count2.emplace_back(element.second);
        }
        
        std::sort(count1.begin(), count1.end());
        std::sort(count2.begin(), count2.end());        
        
        return count1 == count2;
    }
};