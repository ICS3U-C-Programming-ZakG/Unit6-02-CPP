// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Dec. 13, 2023
// This program generates 10 random numbers
// then finds the average and uses lists.

#include <array>
#include <cstdlib>
#include <iostream>

int findMaxValue(std::array<int, 10> list) {
    // declare variable
    int largestNum = 0;

    // look for largest number
    for (int counterThree = 0; list[counterThree] > largestNum; counterThree++) {
        largestNum = list[counterThree];
    }

    // return max
    return largestNum;
}

int main() {
   
    // introduce program to user
    std::cout << "Hello, this program generates 10 random ";
    std::cout << "numbers then finds the max." << std::endl;

    // declare constants and variables
    const int SIZE = 10;
    const int MIN_VALUE = 0;
    const int MAX_NUM = 100;
    std::array<int, SIZE> numList;
    int randomNumber, max;

    // Providing a seed value
    srand((unsigned)time(NULL));

    // populate array
    for (int counter = 0; counter < SIZE; counter++) {
        
        // Generate random number
        randomNumber = rand() % MAX_NUM;

        // assign random number to cells in array
        numList[counter] = randomNumber;
    }

    // call function
    max = findMaxValue(numList);

    // display all generated numbers
    for (int counterTwo = 0; counterTwo < SIZE; counterTwo++) {
        std::cout << "The random numbers are: " << numList[counterTwo] << std::endl;
    }

    // display max
    std::cout << "The max is " << max << std::endl;
}
