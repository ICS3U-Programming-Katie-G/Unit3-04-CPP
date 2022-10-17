// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: October 13th, 2022
// This program gets an integer from
// the user and checks to see if it is
// positive, negative, or zero using
// an if..else if..else statement.
#include <iostream>

// this function will get the integer,
// then check to see if it is positive,
// negative, or zero.
int main() {
    // initializing variable to hold user integer.
    int userInt;

    // getting the user integer.
    std::cout << "Hello :) Integer please :) ";
    std::cin >> userInt;

    // if.. else if.. else statement to check
    // if user int is positive, negative or zero.
    if (userInt >= 1) {
        std::cout << "Oh. Your integer (" << userInt << ") is positive.";
    } else if (userInt <= -1) {
        std::cout << "Oh. Your integer (" << userInt << ") is negative.";
    } else {
        std::cout << "Oh. Your integer (" << userInt << ") is zero.";
    }
}
