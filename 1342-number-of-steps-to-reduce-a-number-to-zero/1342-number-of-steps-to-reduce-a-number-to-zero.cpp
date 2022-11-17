class Solution {
public:
    int numberOfSteps(int num) {
        int counter = 0;
        while(num > 0){
            //EVEN
            if((num % 2) == 0){
                num = num / 2;
                counter++;
                continue;
            }
            
            //ODD
            if((num % 2) != 0){
                num = num - 1;
                counter++;
                continue;
            }   
        }
        
        return counter;
    }
};