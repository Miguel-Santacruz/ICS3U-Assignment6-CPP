// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: May 2022
// This program finds the volume of a sphere

#include <iostream>
#include <string>
#include <cmath>


float Process(float radius) {
    // this function calculates the volume

    float result;

    result = M_PI * pow(radius, 3) * 4/3;

    return result;
}


main() {
    // this function checks the input

    std::string radiusAsString;
    float radius;
    float answer;

    while (true) {
        std::cout << "Please enter radius of sphere (cm): ";
        std::cin >> radiusAsString;
        try {
            std::cout << std::endl;
            radius = std::stof(radiusAsString);
            if (radius < 0) {
                std::cout << "invalid input. Please try again." << std::endl;
                std::cout << std::endl;
            } else {
                answer = Process(radius);
                std::cout << "The volume of a sphere with radius " << radius
                << " cm is: " << answer << " cm³" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "invalid input. Please try again." << std::endl;
            std::cout << std::endl;
        }
    }
}
