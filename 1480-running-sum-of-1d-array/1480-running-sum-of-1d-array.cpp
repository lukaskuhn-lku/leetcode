class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            running.push_back(sum);
        }
        
        return running;
    }
};