// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: oct 2021
// this program rounds a float to the users inputted number

#include <iostream>
#include <random>

int largest_finder(int number_list[10]) {
    // this function finds the smallst number in a list
    int largest;
    int loop_counter;

    largest = number_list[9];

    for (loop_counter = 0; loop_counter < 10; loop_counter++) {
        if (number_list[loop_counter] > largest) {
            largest = number_list[loop_counter];
        }
    }
    return largest;
}

int main() {
    // This function generates 10
    // random numbers snd puts them in s list

    int largest;
    int number_list[10];
    int loop_counter;
    int random_number;
    int largest_number;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [1,10]

    // input
    for (loop_counter = 0; loop_counter <= 10; loop_counter++) {
        random_number = idist(rgen);
        number_list[loop_counter] = (random_number);
        std::cout << "The random number is: " << random_number << std::endl;
    }
    largest_number = (largest_finder(number_list));
    std::cout << "\n\nThe largest number is " << largest_number << std::endl;
    std::cout << "\nDone." << std::endl;
}
