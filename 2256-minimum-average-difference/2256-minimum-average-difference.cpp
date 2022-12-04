#include <cmath>
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        
        long totalSum = 0;
        long currentSum = 0;
        
        long currentMinDist = 99999999;
        int currentMinDistIdx = 0;
        
        for(int i = 0; i<nums.size(); i++){
            totalSum += nums[i];
        }
        
        
        
        for(int i = 0; i<nums.size(); i++){
            currentSum += nums[i];
            
            long avg1 = currentSum / (i+1);
            
            long avg2 = 0;
            if((nums.size() - (i+1)) > 0) avg2 = (totalSum - currentSum) / (nums.size() - (i+1));

            long difference = std::abs(avg1 - avg2);
            
            //std::cout << i << "|" << avg1 << " " << avg2 << "=" << difference << std::endl;
            
            
            if(difference < currentMinDist){
                currentMinDist = difference;
                currentMinDistIdx = i;
            }
        }
        
        
        
        return currentMinDistIdx;
    }
};