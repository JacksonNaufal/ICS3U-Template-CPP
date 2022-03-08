// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a "Pizza calculator using Inches" program with proper style"

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the cost of a pizza with a
    // certain diameter in Inches
    const float COST_PER_INCH = 0.50;
    const float LABOUR = 0.75;
    const float RENT = 1;
    const float HST = 1.13;

    float diameter;
    float cost;
    float total;

    // input
    std::cout << "If your pizza has the Diameter of (Inch): ";
    std::cin >> diameter;

    // process
    cost = RENT + LABOUR + (COST_PER_INCH * diameter);
    total = cost * HST;

    // output
    std::cout << "\nThe Final Cost is: $" <<  std::fixed
    << std::setprecision(2)  << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
