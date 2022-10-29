class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::map<int, int> counts;
        vector<int> numbers;
        
        for (int i = 0; i<nums.size(); i++){
            counts[nums[i]] += 1;
        }
        
        std::map<int,int>::iterator it;
        
         for (it = counts.begin(); it != counts.end(); it++)
        {
            if((it->second) == 1){
                numbers.push_back(it->first);
            }
        }
        
        return numbers;
        
    }
};