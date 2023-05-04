//
//  main.cpp
//  Assignment2.cpp
//
//  Created by Anthony Trejo on 3/27/23.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "           Welcome to the Ounce Conversion Program!!!\n";
    double ounces = 0;
    //double pounds = (ounces/16);
    std::cout << " How many ounces do you have? ";
    std::cin >> ounces;
    std::cout << "Thank you!! Calculating... Done.\n";
    double pounds = (ounces/16);
    std::cout << ounces << " Oz. is equivalent to " << pounds << " lbs.\n";
    std::cout << "Thank you for using OCP!!\n";
    std::cout << "Endeavor to have a magnanimous day!";
    
    
    return 0;
}
