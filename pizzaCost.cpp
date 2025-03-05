// Copyright (c) 2021 Enoch O All rights reserved.
//
// Created by: Enoch O
// Date: Feb 27, 2025
// This program calculates the price of a pizza

#include <iostream>

int main() {
    const float HST = 0.13;
    int pizza_diameter;

    // Assigns a value to pizza_diameter
    std::cout << "Diameter of pizza?: ";
    std::cin >> pizza_diameter;

    // calculates the total cost of pizza
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    float subtotal = RENTAL_COST + LABOUR_COST + pizza_diameter * 1.5;
    float tax = subtotal * HST;
    float total = subtotal + tax;

    std::cout << "The total cost of your pizza is: " << total;
    std::cout << "" << std::endl;
}
