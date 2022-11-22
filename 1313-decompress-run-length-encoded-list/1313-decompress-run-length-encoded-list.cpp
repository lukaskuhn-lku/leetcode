class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> result;
        for(int i = 0; i<nums.size(); i+=2){
            int freq = nums[i];
            int val = nums[i+1];
            
            for(int k = 0; k<freq; k++){
                result.emplace_back(val);
            }
        }
        
        return result;
    }
};