// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// this program is do while loop

#include <iostream>

int main() {
    // this is function for creating do while loop
    
    // define variables
    int number;
    int counter = 0;
    int product_num = 1;

    // input
    std::cout << "Enter a positive integer: " ;
    std::cin >> number;

    // process & output
    if (number <= 0) {
        if (number == 0) {
            std::cout << "0! = 1" << std::endl;
        } else {
            std::cout << "You did not enter a positive integer" << std::endl;
        }
    } else {
        do {
            counter++;
            product_num *= counter;
        } while (counter < number);
        std::cout << number << "! = " << product_num << std::endl;
    }

    // output
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}