#include <cmath>
#include <iostream>
#include <iterator>

int main() {
    std::string car[] = {"Mustang","Camry"};
    int nums[5];

    for (int i = 0; i < std::size(car); i++){
        std::cout << "Elementh [" << i << "] of car = " << car[i] << std::endl;
    }

    for (int i = 0; i < std::size(nums); i++){
        nums[i] = pow(i,2);
    }

    for (int i = 0; i < std::size(nums); i++){
        std::cout << "Elementh [" << i << "] of nums = " << nums[i] << std::endl;
    }
    
    return 0;
}