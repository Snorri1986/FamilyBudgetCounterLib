#include <iostream>
#include <cmath> 

// common tests signatures
int showGreetingMessage();
char * getIncomeGrapthics(double *incomeValues);
void cleanMemory();
// unit tests signatures
void testShowGreetingMessage();
void testGetIncomeGrapthics(); 

const int dividerDKK = 100;
// global arrays
char* arrayIncomeX;

void main()
{
    std::cout << "Unit tests...." << std::endl;
    std::cout << "showGreetingMessage()....";
    testShowGreetingMessage();
    std::cout << std::endl;
    std::cout << "getIncomeGrapthics()....";
    testGetIncomeGrapthics();
    std::cout << std::endl;
    /* ------------------------------------------- */
    std::cout << "-------------------------------------------" << std::endl;
    showGreetingMessage();
    cleanMemory();
    system("pause>0");
}

// return int value needs for unit tests
int showGreetingMessage() {
    std::cout << "Welcome to FamilyBudgetCounter Library" << std::endl;
    std::cout << "In a few minutes I will count all your expances and you can see result in Java application" << std::endl;
    std::cout << "It was a pleasure to work for you!See you later!" << std::endl;
    return 0;
}

// get array of X for incomes
char * getIncomeGrapthics(double *incomeValues) {
    int arrLength = sizeof(incomeValues);
    double sum = 0;
    for (int i = 0;i <= arrLength;i++) {
        sum += incomeValues[i];
    }
    int countX = static_cast<int>(std::round(sum/dividerDKK));
    char* arrayIncomeX = new char[countX]; 
   for (int i = 0; i <= sizeof(arrayIncomeX);i++) {
      arrayIncomeX[i] = 'X';
   }
   return arrayIncomeX;
}

void cleanMemory() {
    delete[] arrayIncomeX;
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

void testGetIncomeGrapthics() {
    double * testArr = new double[5];
    testArr[0] = 23.5;
    testArr[1] = 1200.5;
    testArr[2] = 2300.7;
    testArr[3] = 2500.8;
    testArr[4] = 2700.8;
    double * ptr_testArr = testArr;
    char * resultArray = getIncomeGrapthics(ptr_testArr);
    char expected = 'X';
    if (resultArray[0] == expected) {
       std::cout << "PASSED" << std::endl;
    }
   else {
      std::cout << "NOT PASSED" << std::endl;
    }
    delete [] testArr;
}



