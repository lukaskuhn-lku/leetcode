class ParkingSystem {
public:
    
    std::unordered_map<int, int> spaces;
    ParkingSystem(int big, int medium, int small) {
        spaces[1] = big;
        spaces[2] = medium;
        spaces[3] = small;
    }
    
    bool addCar(int carType) {
        if(spaces[carType] > 0){
            spaces[carType]--;
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
