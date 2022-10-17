class Solution {
public:
    bool isPalindrome(int x) {
        std::list<int> digits;

        if (x < 0){
            return false;
        }

        while (x > 0)
        {
            int digit = x%10;
            x /= 10;
            digits.push_back(digit);
        }

        bool palindrome = true;
        auto front = digits.begin();
        auto back = digits.rbegin();
        for (int i = 0; i<digits.size()/2; i++){
            std::cout << *front << std::endl;
            std::cout << *back << std::endl;

            if(*front != *back){
                palindrome = false;
            }

            std::advance(front, 1);
            std::advance(back, 1);
        }

        return palindrome;
    }
};