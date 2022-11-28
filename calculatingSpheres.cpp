// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that calculates a sphere's volume

#include <cmath>
#include <iostream>
#include <string>

float radiusNumber;
float volume;

void volumeOfASphere() {
    // Calculates a sphere's volume

    std::cout << "This program calculates a sphere's surface volume.";
    std::cout << std::endl;
    std::cout << "V = (4 ÷ 3) × πr³" << std::endl;
    std::cout << std::endl;
    try {
        std::string radiusText;
        std::cout << "Enter the sphere's radius: ";
        std::cin >> radiusText;
        radiusNumber = stof(radiusText);
        volume = (4.0 / 3.0) * M_PI * pow(radiusNumber, 3);
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

int main() {
    // Calls a function

    volumeOfASphere();
}
