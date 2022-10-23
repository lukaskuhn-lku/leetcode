class Solution {
//Classic Binary Search
    // 1,3,5,6 
public:
    int searchInsert(vector<int>& nums, int target) {
        return searchInSubset(nums, 0, nums.size()-1, target);
    }
    
    int searchInSubset(vector<int>& subset, int leftIndex, int rightIndex, int target){
          int middle = (leftIndex + rightIndex) / 2;
        
          std::cout << middle << "|"<< leftIndex <<"|"<< rightIndex << std::endl;

        
          if(subset[middle] == target){
              return middle;
          }
        
          if(leftIndex > rightIndex){
              if (leftIndex < target){
                  return leftIndex--;
              }else{
                  return leftIndex++;
              }
          }
        
          if(subset[middle] < target){
              leftIndex = middle+1;
              return searchInSubset(subset, leftIndex, rightIndex, target);
          }
        
          if(subset[middle] > target){
              rightIndex = middle-1;
              return searchInSubset(subset, leftIndex, rightIndex, target);
          }
        
        return 0;
    }
};