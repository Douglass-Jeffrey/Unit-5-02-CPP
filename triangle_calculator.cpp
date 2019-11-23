// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program calculates The area of a triangle using multiple functions

#include <iostream>
#include <string>

void Area(float base, float height) {
    // this function calculates area baseed of given base and height lengths
    // process
    float area = (base * height) / 2;

    // output
    std::cout << "The area of your triangle is " << area << " units squared."
              << std::endl;
}

main() {
    // this function recieves user inputs
    // variables
    std::string stringBase;
    std::string stringHeight;
    float base = 0;
    float height = 0;

    while (true) {
        try {
            // input
            std::cout << "Input the base length of the triangle: " << std::endl;
            std::cin >> stringBase;
            std::cout << "Input the height of the triangle: " << std::endl;
            std::cin >> stringHeight;
            // turns variables into float which is needed for fractional values
            base = std::stof(stringBase);
            height = std::stof(stringHeight);

            // runs Area()
            Area(base, height);
            break;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input. Try again." << std::endl;
            continue;
        }
    }
}
