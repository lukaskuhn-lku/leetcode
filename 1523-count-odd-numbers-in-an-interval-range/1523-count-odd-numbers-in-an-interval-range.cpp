class Solution {
public:
    int countOdds(int low, int high) {
        int numbersBetween = high - low;
        
        int x = (numbersBetween / 2);

        if((high % 2) != 0 || (low % 2) != 0){
            return x + 1;
        }else{
            return x;
        }
    }
};