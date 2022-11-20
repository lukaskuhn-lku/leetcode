class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        
        double kelvin = 273.1500000L;
        ans.push_back(celsius + kelvin);
        ans.push_back(celsius * 1.800000L + 32.000000L);
        
        return ans;
    }
};