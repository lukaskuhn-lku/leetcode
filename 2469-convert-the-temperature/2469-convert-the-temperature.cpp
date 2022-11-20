class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        
        ans.push_back(celsius + 273.1500000L);
        ans.push_back(celsius * 1.800000L + 32.000000L);
        
        return ans;
    }
};