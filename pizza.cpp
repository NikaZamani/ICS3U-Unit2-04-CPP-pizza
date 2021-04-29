// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program calculates the cost of pizza


#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "What diameter pizza would you like? (inch): ";
    std::cin >> diameter;

    // process
    sub_total = RENT + LABOR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // output
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
