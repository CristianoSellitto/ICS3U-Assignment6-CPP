// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that calculates a sphere's area and volume

#include <iostream>
#include <string>
#include <cmath>

float radiusNumber;
float surfaceArea;
float volume;

int main() {
    // Calculates a sphere's area and volume

    std::cout << "This program calculates a sphere's surface area and volume";
    std::cout << std::endl;
    std::cout << "A = 4πr²" << std::endl;
    std::cout << "V = (4 ÷ 3) × πr³" << std::endl;
    std::cout << std::endl;
    try {
        std::string radiusText;
        std::cout << "Enter the sphere's radius: ";
        std::cin >> radiusText;
        radiusNumber = stof(radiusText);
        surfaceArea = 4 * M_PI * pow(radiusNumber, 2);
        volume = (4.0 / 3.0) * M_PI * pow(radiusNumber, 3);
        std::cout << "\nThis sphere's surface area is " << surfaceArea << "cm²";
        std::cout << std::endl;
        std::cout << "This sphere's volume is " << volume << "cm³";
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "You did not input a number. (ValueError)";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
