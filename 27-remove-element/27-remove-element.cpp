// 1 2 3 5 6 6


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for (int i=0; i<nums.size(); i++){
            std::cout << nums[i] <<std::endl;

            if(nums[i] == val){
                for(int j = i; j<nums.size()-1; j++){
                    nums[j] = nums[j+1];
                }   
                nums.pop_back();
                k--;
                i--;
            }
            
            for (int x = 0; x<nums.size(); x++){
                std::cout << nums[x] << " ";
            }
            std::cout << std::endl;
            
        }
        
        return k;
    }
};