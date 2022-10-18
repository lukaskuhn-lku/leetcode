class Solution {
public:
    int reverse(int x) {
        //Store digits in a stack
        //Pop them out of the stack and multiply them by 10^(size of stack)
        //  While doing that check if outside the 32 bit integer range
        //If negative set a flag and change it afterwards
        
        std::stack<int> sd;
        std::stack<int> sdReverse;
        
        int positive = 1;
        
        if (x < 0){
            positive = -1;
            
            if(x == -2147483648){
                return 0;
            }
            
            x *= -1;
        }
        
        while (x > 0){
            int digit = x%10;
            x /= 10;
            sd.push(digit);
        }
        
        while(sd.size() != 0){
            sdReverse.push(sd.top());
            sd.pop();
        }
        
        double sum = 0;
        while(sdReverse.size() != 0){
            double factor = std::pow(10, sdReverse.size()-1);
            double res = sdReverse.top()*factor;
                
            sum += res;
            
            sdReverse.pop();
        }
        
        if (sum >= std::pow(2, 31)){
            return 0;
        }
        
        sum *= positive;
        return (int)sum;
    }
};