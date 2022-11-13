class Solution {
public:
    int subtractProductAndSum(int n) {

        vector<int> digits;

        while (n > 0)
        {
            int digit = n%10;
            n /= 10;
            digits.push_back(digit);
        }
        
        int prod = 1;
        int sum = 0;
        
        for(int i = 0; i<digits.size(); i++){
            prod *= digits[i];
            sum += digits[i];    
        }
        
        return prod-sum;
    }
};