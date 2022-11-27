class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
        vector<int> negative;
        vector<int> positive;
        vector<int> res;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < 0){ 
                negative.emplace_back(nums[i]);
            }else{
                positive.emplace_back(nums[i]);
            }
        }
        
        for(int i = 0; i<positive.size(); i++){
            res.emplace_back(positive[i]);
            res.emplace_back(negative[i]);
        }
        
        return res;
    }
};