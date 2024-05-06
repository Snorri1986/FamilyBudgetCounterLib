// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>
#include <cmath> 

// common tests signatures
int showGreetingMessage();
char * getIncomeGraphics(double *incomeValues);
char* getMyGroceriesGraphics(double* groceriesValues);
char* getMyHousingGraphics(double* housingValues);
char* getMyTravellingGraphics(double* travellingValues);
char* getMyEntertainmentGraphics(double* entertainmentValues);
char* getMyHealthGraphics(double* healthValues);
char* getMyMobileInternetGraphics(double* mobileInternetValues);
void cleanMemory();
// unit tests signatures
void testShowGreetingMessage();
void testGetIncomeGraphics();
void testGetMyGroceriesGraphics();
void testGetMyHousingGraphics();
void testGetMyTravellingGraphics();
void testGetMyEntertainmentGraphics();
void testGetMyHealthGraphics();
void testGetMyMobileInternetGraphics();

const int dividerDKK = 100;
// global arrays
char* arrayIncomeX;
char* arrayGroceriesX;
char* arrayHousingX;
char* arrayTravellingX;
char* arrayEntertainmentX;
char* arrayHealthX;
char* arrayMobileInternetX;

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
    cleanMemory();
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

// get array of X for incomes
char * getIncomeGraphics(double *incomeValues) {
    int arrLength = sizeof(incomeValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += incomeValues[i];
    }
    int countX = static_cast<int>(std::round(sum/dividerDKK));
    char* arrayIncomeX = new char[countX]; 
    int arrSize = sizeof(arrayIncomeX);
    for (int i = 0; i <= arrSize;i++) {
      arrayIncomeX[i] = 'X';
   }
   return arrayIncomeX;
}

char* getMyGroceriesGraphics(double* groceriesValues) {
    int arrLength = sizeof(groceriesValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += groceriesValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayGroceriesX = new char[countX];
    for (int i = 0; i <= sizeof(arrayGroceriesX);i++) {
        arrayGroceriesX[i] = 'X';
    }
    return arrayGroceriesX;
}

char* getMyHousingGraphics(double* housingValues) {
    int arrLength = sizeof(housingValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += housingValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayHousingX = new char[countX];
    for (int i = 0; i <= sizeof(arrayHousingX);i++) {
        arrayHousingX[i] = 'X';
    }
    return arrayHousingX;
}

char* getMyTravellingGraphics(double* travellingValues) {
    int arrLength = sizeof(travellingValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += travellingValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayTravellingX = new char[countX];
    for (int i = 0; i <= sizeof(arrayTravellingX);i++) {
        arrayTravellingX[i] = 'X';
    }
    return arrayTravellingX;
}

char* getMyEntertainmentGraphics(double* entertainmentValues) {
    int arrLength = sizeof(entertainmentValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += entertainmentValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayEntertainmentX = new char[countX];
    for (int i = 0; i <= sizeof(arrayEntertainmentX);i++) {
        arrayEntertainmentX[i] = 'X';
    }
    return arrayEntertainmentX;
}

char* getMyHealthGraphics(double* healthValues) {
    int arrLength = sizeof(healthValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += healthValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayHealthX = new char[countX];
    for (int i = 0; i <= sizeof(arrayHealthX);i++) {
        arrayHealthX[i] = 'X';
    }
    return arrayHealthX;
}

char* getMyMobileInternetGraphics(double* mobileInternetValues) {
    int arrLength = sizeof(mobileInternetValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += mobileInternetValues[i];
    }
    int countX = static_cast<int>(std::round(sum / dividerDKK));
    char* arrayMobileInternetX = new char[countX];
    for (int i = 0; i <= sizeof(arrayMobileInternetX);i++) {
        arrayMobileInternetX[i] = 'X';
    }
    return arrayMobileInternetX;
}

void cleanMemory() {
    delete[] arrayIncomeX;
    delete[] arrayGroceriesX;
    delete[] arrayHousingX;
    delete[] arrayTravellingX;
    delete[] arrayEntertainmentX;
    delete[] arrayHealthX;
    delete[] arrayMobileInternetX;
}

//TODO: add list of methods related with library

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
    double * testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double * ptr_testArr = testArr;
    char * resultArray = getIncomeGraphics(ptr_testArr);
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



