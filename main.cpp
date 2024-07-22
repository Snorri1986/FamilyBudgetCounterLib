// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>
#include "functionslib.h"

// common tests signatures
int showGreetingMessage();

// unit tests signatures
void testShowGreetingMessage();
void testGetIncomeGraphics();
void testGetMyGroceriesGraphics();
void testGetMyHousingGraphics();
void testGetMyTravellingGraphics();
void testGetMyEntertainmentGraphics();
void testGetMyHealthGraphics();
void testGetMyMobileInternetGraphics();

int main()
{
    std::cout << "Unit tests...." << std::endl;
    std::cout << "showGreetingMessage()....";
    testShowGreetingMessage();
    std::cout << std::endl;
    std::cout << "getIncomeGrapthics()....";
    testGetIncomeGraphics();
    std::cout << std::endl;
    std::cout << "getMyGroceriesGraphics()....";
    testGetMyGroceriesGraphics();
    std::cout << std::endl;
    std::cout << "getMyHousingGraphics()....";
    testGetMyHousingGraphics();
    std::cout << std::endl;
    std::cout << "getMyTravellingGraphics()....";
    testGetMyTravellingGraphics();
    std::cout << std::endl;
    std::cout << "getMyEntertainmentGraphics()....";
    testGetMyEntertainmentGraphics();
    std::cout << std::endl;
    std::cout << "getMyHealthGraphics()....";
    testGetMyHealthGraphics();
    std::cout << std::endl;
    std::cout << "getMyMobileInternetGraphics()....";
    testGetMyMobileInternetGraphics();
    /* ------------------------------------------- */
    std::cout << "-------------------------------------------" << std::endl;
    showGreetingMessage();
    system("pause>0");
    return 0;
}

// return int value needs for unit tests
int showGreetingMessage() {
    std::cout << "Welcome to FamilyBudgetCounter Library" << std::endl;
    std::cout << "In a few minutes I will count all your expances and you can see result in Java application" << std::endl;
    std::cout << "It was a pleasure to work for you!See you later!" << std::endl;
    return 0;
}

/* ------------------------------------------- */

// unit test methods
void testShowGreetingMessage() {
    int expected = 0; // 0 - OK, 1 - Errors
    std::cout.setstate(std::ios_base::failbit);
    int actual = showGreetingMessage();
    if (expected == actual) {
    std::cout.clear();
        std::cout << "PASSED" << std::endl;
    }  else
    {
        std::cout << "NOT PASSED" << std::endl;
    }
}


void testGetIncomeGraphics() {
    //double * testArr = new double[3];
    //testArr[0] = 23.5;
    //testArr[1] = 1200.5;
    //testArr[2] = 2300.7;
    //testArr[3] = 2500.8;
    //testArr[4] = 2700.8;
    double testArr[5] = { 23.5,1200.5,2300.7,2500.8,2700.8 };
    //int arrLength = sizeof(testArr);
    //size_t size = sizeof(testArr) / sizeof(testArr[0]); 
    //std::cout << "Array size: " << size << std::endl;
    //    double * ptr_testArr = testArr;
    //char * resultArray = getIncomeGraphics(ptr_testArr);
    char* resultArray = getIncomeGraphics(testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
       std::cout << "PASSED" << std::endl;
    }
   else {
      std::cout << "NOT PASSED" << std::endl;
    }
    delete [] testArr;
}

void testGetMyGroceriesGraphics() {
    double* testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double* ptr_testArr = testArr;
    char* resultArray = getMyGroceriesGraphics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
    delete[] testArr;
}

void testGetMyHousingGraphics() {
    double* testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double* ptr_testArr = testArr;
    char* resultArray = getMyHousingGraphics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
    delete[] testArr;
}

void testGetMyTravellingGraphics() {
    double* testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double* ptr_testArr = testArr;
    char* resultArray = getMyTravellingGraphics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
    delete[] testArr;
}

void testGetMyEntertainmentGraphics() {
    double* testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double* ptr_testArr = testArr;
    char* resultArray = getMyEntertainmentGraphics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
    delete[] testArr;
}

void testGetMyHealthGraphics() {
    double* testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double* ptr_testArr = testArr;
    char* resultArray = getMyHealthGraphics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
    delete[] testArr;
}

void testGetMyMobileInternetGraphics() {
    double* testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double* ptr_testArr = testArr;
    char* resultArray = getMyMobileInternetGraphics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "NOT PASSED" << std::endl;
    }
    delete[] testArr;
}



